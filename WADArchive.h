/*
** HLMWadExplorer
**
** Copyright (C) 2015 Tobias Taschner <github@tc84.de>
**
** Licensed under GPL v3 or later
*/

#include <wx/wx.h>

#include <wx/vector.h>
#include <wx/filename.h>

class WADArchive;

class WADArchiveEntry
{
public:
	enum EntryStatus
	{
		Entry_Original,
		Entry_Replaced,
		Entry_Added
	};

	WADArchiveEntry(const wxString& fileName, wxInt64 size, wxInt64 offset):
		m_status(Entry_Original),
		m_fileName(fileName),
		m_size(size),
		m_offset(offset),
		m_sourceArchive(NULL)
	{

	}

	WADArchiveEntry(const WADArchiveEntry& entry, const WADArchive* sourceArchive):
		m_status(Entry_Original),
		m_fileName(entry.GetFileName()),
		m_size(entry.GetSize()),
		m_offset(entry.GetOffset()),
		m_sourceFileName(entry.GetSourceFileName()),
		m_sourceArchive(sourceArchive)
	{

	}
	
	WADArchiveEntry(const wxString& fileName, const wxString& sourceFileName):
		m_fileName(fileName),
		m_sourceArchive(NULL)
	{
		SetSourceFileName(sourceFileName);
	}

	const wxString& GetFileName() const
	{
		return m_fileName;
	}

	wxInt64 GetSize() const
	{
		return m_size;
	}
	void SetSize(wxInt64 o) {
		m_size = o;
	}


	wxInt64 GetOffset() const
	{
		return m_offset;
	}

	void SetOffset(wxInt64 o) {
		m_offset = o;
	}
	
	const wxString& GetSourceFileName() const
	{
		return m_sourceFileName;
	}
	
	void SetSourceFileName(const wxString& value)
	{
		m_sourceFileName = value;
		m_offset = 0;
		m_size = wxFileName::GetSize(value).ToULong();
	}
	
	const WADArchive* GetSourceArchive() const
	{
		return m_sourceArchive;
	}

	EntryStatus GetStatus() const
	{
		return m_status;
	}

	void SetStatus(EntryStatus status)
	{
		m_status = status;
	}

private:
	EntryStatus m_status;
	wxString m_fileName;
	wxInt64 m_size;
	wxInt64 m_offset;
	wxString m_sourceFileName;
	const WADArchive* m_sourceArchive;
};

class WADDirEntry
{
public:
	WADDirEntry(WADDirEntry* parent)
	{
		m_parent = parent;
	}

	virtual ~WADDirEntry()
	{ }

	virtual bool IsContainer() const = 0;
	
	virtual size_t GetChildCount() const = 0;

	virtual WADDirEntry* GetChild(size_t index) const = 0;

	virtual WADArchiveEntry* GetEntry() const = 0;

	const wxString& GetName() const
	{
		return m_name;
	}

	WADDirEntry* GetParent() const
	{
		return m_parent;
	}
	void SetParent(WADDirEntry *p) {
		m_parent = p;
	}

	bool empty() const
	{
		return GetChildCount() == 0;
	}

	wxString GetPath() const;

	size_t GetDirCount() const;

protected:
	wxString m_name;

private:
	WADDirEntry* m_parent;
};


//
// FileWADDirEntry
//
class FileWADDirEntry : public WADDirEntry
{
public:
	FileWADDirEntry(WADDirEntry* parent, WADArchiveEntry* entry) :
		WADDirEntry(parent)
	{
		m_entry = entry;
		wxFileName fn(entry->GetFileName());
		m_name = fn.GetFullName();
	}

	virtual bool IsContainer() const override
	{
		return false;
	}

	virtual size_t GetChildCount() const override
	{
		return 0;
	}

	virtual WADDirEntry* GetChild(size_t index) const override
	{
		return NULL;
	}

	virtual WADArchiveEntry* GetEntry() const override
	{
		return m_entry;
	}

private:
	WADArchiveEntry* m_entry;
};

//
// PakWADDirEntry
//
class PakWADDirEntry : public FileWADDirEntry
{
public:
	PakWADDirEntry(WADDirEntry* parent, WADArchiveEntry* entry) :
		FileWADDirEntry(parent, entry)
	{

	}

	virtual bool IsContainer() const override
	{
		// TODO: return true after implementing parsing
		return false;
	}

	virtual size_t GetChildCount() const override
	{
		// TODO: enumerate sub entries
		return 0;
	}

	virtual WADDirEntry* GetChild(size_t index) const override
	{
		return NULL;
	}

private:

};

//
// FolderWADDirEntry
//
class FolderWADDirEntry : public WADDirEntry
{
public:
	FolderWADDirEntry(WADDirEntry* parent, const wxString& name) :
		WADDirEntry(parent)
	{
		m_name = name;
	}

	virtual bool IsContainer() const override
	{
		return true;
	}

	virtual size_t GetChildCount() const override
	{
		return m_entries.size();
	}

	virtual WADDirEntry* GetChild(size_t index) const override
	{
		return m_entries[index].get();
	}

	virtual WADArchiveEntry* GetEntry() const override
	{
		return NULL;
	}

	WADDirEntry* AddFolder(const wxString& name)
	{
		wxSharedPtr<WADDirEntry> folder(new FolderWADDirEntry(this, name));
		m_entries.push_back(folder);
		return folder.get();
	}

	WADDirEntry* AddFile(WADArchiveEntry* entry)
	{
		wxFileName fn(entry->GetFileName());
		WADDirEntry* subDir;
		if (fn.GetExt().IsSameAs("pak", false))
			subDir = new PakWADDirEntry(this, entry);
		else
			subDir = new FileWADDirEntry(this, entry);

		wxSharedPtr<WADDirEntry> folder(subDir);
		m_entries.push_back(folder);
		return folder.get();
	}

private:
	wxVector< wxSharedPtr<WADDirEntry> > m_entries;
};


class WADArchive
{
public:
	enum WADFormat
	{
		FmtHM2,
		FmtHM1,
		FmtHM2v2
	};

	WADArchive(const wxString& fileName, bool createFile = false);

	size_t GetEntryCount() const
	{
		return m_entries.size();
	}

	const WADArchiveEntry& GetEntry(size_t index) const
	{
		return m_entries[index];
	}

	const WADArchiveEntry& GetEntry(const wxString& fileName) const;

	const wxString& GetFileName() const
	{
		return m_fileName;
	}

	void Remove(size_t itemIndex);
	
	void Add(const WADArchiveEntry& entry);
	
	void Replace(size_t itemIndex, const wxString& sourceFileName);

	bool Extract(const WADArchiveEntry& entry, const wxString& targetFileName);

	bool Extract(const WADArchiveEntry& entry, wxOutputStream& oStr);

	wxBitmap ExtractBitmap(const WADArchiveEntry& entry);
	
	bool Write();
	
	bool Write(wxOutputStream& oStr);
	
	bool Write(const wxString& targetFileName);

	bool CreatePatch(const wxString& targetFileName);

	bool LoadPatch(const wxString& patchFileName);

	bool IsModified() const
	{
		return m_modified;
	}

	bool GetReadOnly() const
	{
		return m_readOnly;
	}

	WADFormat GetFormat() const
	{
		return m_format;
	}

	/// Returns false if no entries matched the filter
	bool ApplyFilter(const wxString& filter);

	WADDirEntry* GetRootDir() const
	{
		return m_rootDir.get();
	}

	void Replace(WADDirEntry* dir, const wxString& sourceFileName);

	WADDirEntry* FindDir(const wxString& path, bool createOnDemand = false);
	void SetOffset(wxFileOffset o) { m_dataOffset = o; };

	void CalculateOffset();
	void RemoveEntry(const WADArchiveEntry *e, const WADArchiveEntry *o);

	void ResetOffsets();
private:
	bool m_readOnly;
	WADFormat m_format;
	wxString m_fileName;
	wxVector<WADArchiveEntry> m_entries;
	wxSharedPtr<WADDirEntry> m_rootDir;
	wxFileOffset m_dataOffset;
	bool m_modified;
	wxSharedPtr<WADArchive> m_patchArchive;

	void ParseFile();
	
};
