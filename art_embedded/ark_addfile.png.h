#ifndef ARK_ADDFILE_PNG_H
#define ARK_ADDFILE_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char ark_addfile_png[] = 
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 
	0x00, 0x00, 0x00, 0x16, 0x08, 0x06, 0x00, 0x00, 0x00, 0xC4, 
	0xB4, 0x6C, 0x3B, 0x00, 0x00, 0x04, 0xAA, 0x49, 0x44, 0x41, 
	0x54, 0x78, 0x5E, 0x8D, 0x94, 0x4D, 0x6C, 0x54, 0x45, 0x00, 
	0xC7, 0xFF, 0x33, 0x6F, 0xDE, 0x7E, 0x74, 0x17, 0xB6, 0x6C, 
	0x5D, 0x3E, 0x0A, 0xA4, 0x7C, 0x28, 0xA2, 0x29, 0x94, 0x52, 
	0x41, 0x53, 0x3F, 0x00, 0xA1, 0x2A, 0x24, 0x86, 0xA0, 0x46, 
	0x34, 0xC6, 0x28, 0x62, 0xBC, 0x79, 0x30, 0xC1, 0x83, 0x41, 
	0x4F, 0xC6, 0x78, 0x30, 0xC1, 0x18, 0x23, 0x17, 0x3D, 0x48, 
	0x03, 0x07, 0x4C, 0x3C, 0x18, 0x95, 0x88, 0x40, 0x83, 0x84, 
	0x28, 0x28, 0xAD, 0x54, 0x8A, 0x94, 0x08, 0x29, 0xA4, 0xC4, 
	0x2E, 0xA5, 0xDB, 0x76, 0x3F, 0xBA, 0xEF, 0xBD, 0x99, 0x37, 
	0x33, 0xCE, 0x9B, 0x64, 0x37, 0xCD, 0x72, 0xF1, 0xB7, 0x99, 
	0xCC, 0x9B, 0x77, 0xF8, 0xE5, 0xB7, 0x93, 0x99, 0x47, 0x2E, 
	0x5E, 0x1C, 0x39, 0x02, 0xE0, 0x19, 0xFC, 0x0F, 0x2E, 0x5C, 
	0xB8, 0x72, 0x76, 0xEF, 0xDE, 0xED, 0x3B, 0x37, 0x1D, 0x7E, 
	0x58, 0x03, 0xD8, 0x3D, 0xF8, 0xF3, 0xA5, 0x6F, 0x30, 0x0B, 
	0xA9, 0x14, 0x44, 0x28, 0xF1, 0xD5, 0xD6, 0x9D, 0x60, 0x91, 
	0xB4, 0xA3, 0x63, 0x59, 0xB6, 0x26, 0xE0, 0x5C, 0xA3, 0x91, 
	0x6A, 0xD5, 0x07, 0xE7, 0x21, 0x0C, 0x8F, 0xD5, 0x24, 0x95, 
	0xD6, 0xE2, 0x17, 0x1D, 0x4F, 0xAD, 0x59, 0x72, 0xF1, 0x8F, 
	0xC1, 0x03, 0x20, 0x00, 0x14, 0xC0, 0x28, 0xC1, 0xA1, 0x9E, 
	0xD7, 0xD1, 0xE5, 0xCE, 0x03, 0x45, 0x03, 0x8E, 0x43, 0xA0, 
	0x75, 0x5D, 0x68, 0x47, 0x44, 0xDF, 0xD5, 0x3E, 0x0C, 0xB2, 
	0xD3, 0x49, 0x53, 0x5B, 0x80, 0x61, 0xDE, 0x93, 0x0B, 0xEE, 
	0xA1, 0x0B, 0xF2, 0x9F, 0xAC, 0xDB, 0xD0, 0x71, 0xA0, 0x74, 
	0x39, 0x40, 0xE9, 0x7C, 0x80, 0xF7, 0x96, 0x6F, 0xC6, 0x73, 
	0x2B, 0x1E, 0x44, 0x89, 0xF3, 0xBA, 0x18, 0x27, 0x4E, 0xF4, 
	0xD7, 0xC7, 0xA9, 0x53, 0xFD, 0x35, 0xA1, 0x2D, 0xCD, 0xE7, 
	0xA7, 0x90, 0x6B, 0xC9, 0xE1, 0xD1, 0xF6, 0xEE, 0xE4, 0xBB, 
	0x2F, 0xEE, 0xCB, 0xBE, 0xFC, 0xCA, 0xF3, 0xA0, 0xC5, 0x19, 
	0xDC, 0xDB, 0xB6, 0x85, 0x0E, 0xDD, 0x1E, 0x7E, 0xE7, 0x89, 
	0xD7, 0x36, 0xEE, 0x80, 0x0F, 0x23, 0xF4, 0x21, 0xB5, 0x06, 
	0x01, 0xC0, 0x6A, 0xE2, 0x9E, 0x9E, 0x2E, 0x3B, 0x2B, 0x05, 
	0x84, 0xA1, 0x86, 0xEF, 0x73, 0x2B, 0x95, 0x52, 0x21, 0xC2, 
	0x93, 0x3E, 0x7E, 0x0B, 0x7F, 0xC1, 0xDF, 0xDE, 0x19, 0xC0, 
	0x03, 0xDA, 0x6E, 0xB7, 0xA3, 0xF7, 0xCF, 0x43, 0x48, 0x63, 
	0x2E, 0xAE, 0xFC, 0x78, 0xF9, 0xD8, 0x9E, 0x6D, 0xEB, 0xB1, 
	0xA6, 0x75, 0x11, 0x3C, 0x21, 0x10, 0xC1, 0x66, 0x17, 0x47, 
	0x68, 0x6D, 0xE5, 0x08, 0x02, 0x81, 0xD9, 0x84, 0xF3, 0x04, 
	0xF2, 0x97, 0x8A, 0x5E, 0xFF, 0xD9, 0x7F, 0xBC, 0xF6, 0x05, 
	0xAB, 0xB3, 0xBD, 0xAE, 0x91, 0xDE, 0x9A, 0x0B, 0xF3, 0xFC, 
	0xD1, 0x9B, 0x3B, 0x5A, 0xF1, 0xEA, 0x86, 0x6E, 0x94, 0xAA, 
	0x1E, 0x4A, 0x41, 0x00, 0x34, 0x16, 0xD7, 0x90, 0x12, 0xF0, 
	0x3C, 0x6E, 0xAA, 0x05, 0xC6, 0xC7, 0xA7, 0xCD, 0x3A, 0x84, 
	0x52, 0x0B, 0xD1, 0x93, 0x78, 0xC1, 0x7B, 0xC9, 0xF3, 0xB3, 
	0x9F, 0xE2, 0x9A, 0x95, 0x7E, 0xE9, 0xEE, 0x2A, 0x34, 0x4D, 
	0x3A, 0x3B, 0x95, 0xC6, 0xE2, 0x5B, 0x13, 0x85, 0x3D, 0x8C, 
	0x31, 0x50, 0x27, 0x7E, 0x77, 0xB1, 0xD6, 0x76, 0x1B, 0xEC, 
	0xDF, 0x6F, 0x64, 0xD5, 0xAA, 0xA5, 0x60, 0xE0, 0xD9, 0x8D, 
	0x8F, 0xB4, 0x63, 0xE8, 0xFC, 0x0F, 0x38, 0xB2, 0xF6, 0x0D, 
	0x64, 0x2E, 0x4D, 0x23, 0xDD, 0xE6, 0x3A, 0x2D, 0xF3, 0x33, 
	0xAD, 0x23, 0xD7, 0xCB, 0x37, 0xDC, 0x18, 0x1D, 0x13, 0x21, 
	0xFE, 0x6D, 0xCE, 0xB2, 0x3D, 0x75, 0xF1, 0xB6, 0x6D, 0x5D, 
	0x56, 0x1C, 0x04, 0xCA, 0x94, 0xFA, 0xB6, 0x56, 0x6B, 0x0D, 
	0x21, 0x24, 0x94, 0xD2, 0x66, 0x28, 0x28, 0x00, 0xE5, 0x19, 
	0x0F, 0x87, 0x33, 0xBB, 0x91, 0xBA, 0xA3, 0x90, 0xDB, 0xB8, 
	0xA2, 0x25, 0xD5, 0x14, 0x6B, 0x71, 0x29, 0x7D, 0x20, 0xB7, 
	0x94, 0x62, 0x7A, 0xB2, 0xD8, 0x36, 0x75, 0xBB, 0x1C, 0x8A, 
	0x20, 0xF9, 0x76, 0x5D, 0x7C, 0xF2, 0x64, 0xBF, 0x91, 0x68, 
	0x70, 0xCE, 0xAD, 0xA8, 0xB1, 0x7A, 0xFD, 0xFA, 0xFB, 0xE1, 
	0x38, 0x14, 0xCB, 0xDB, 0x97, 0x60, 0xE5, 0xEA, 0xC5, 0xC8, 
	0xE7, 0xEF, 0x60, 0xE2, 0x4E, 0x01, 0x37, 0x87, 0x27, 0xE0, 
	0x57, 0x3D, 0x80, 0x10, 0x40, 0x4B, 0x38, 0x2E, 0x65, 0xBE, 
	0x17, 0xDB, 0x5D, 0x17, 0x6F, 0xDD, 0xDA, 0x05, 0xCF, 0x13, 
	0x91, 0xD0, 0xD6, 0x85, 0xA1, 0xB2, 0xC5, 0x61, 0x28, 0xEB, 
	0x6B, 0x68, 0xA0, 0x70, 0xB3, 0x88, 0xC1, 0xA1, 0x21, 0x94, 
	0x27, 0x0B, 0x60, 0x54, 0x41, 0x3B, 0x0C, 0x04, 0x91, 0x97, 
	0x20, 0x82, 0x48, 0x20, 0xE6, 0x68, 0x5D, 0x17, 0x1F, 0x3F, 
	0x1E, 0x15, 0x0B, 0x5B, 0xAB, 0xB5, 0x2D, 0xB6, 0xB3, 0x91, 
	0xDA, 0xB9, 0xBB, 0x7B, 0x2D, 0x34, 0x34, 0x02, 0x11, 0xA2, 
	0xEA, 0x57, 0xA1, 0x1C, 0x09, 0x41, 0xA9, 0xAD, 0xA4, 0x04, 
	0x90, 0x02, 0x36, 0xC0, 0x8D, 0x33, 0xC4, 0x00, 0x52, 0x17, 
	0x6F, 0xDA, 0xB4, 0xCE, 0x48, 0x64, 0x4D, 0x5C, 0xAF, 0x94, 
	0xD2, 0xBE, 0xAB, 0x15, 0x5B, 0xB1, 0x10, 0x1C, 0xA1, 0xCF, 
	0x41, 0x8D, 0x58, 0x12, 0x8D, 0x52, 0x59, 0xA0, 0x5A, 0x55, 
	0x48, 0xA5, 0x1D, 0x64, 0x49, 0x02, 0xCA, 0x51, 0x9A, 0xC2, 
	0x02, 0x2B, 0x35, 0x3E, 0x2B, 0xED, 0xEB, 0x1B, 0x30, 0xB7, 
	0x6F, 0xA0, 0x76, 0xAE, 0x6B, 0xD8, 0x62, 0xE1, 0x07, 0x08, 
	0xB9, 0x00, 0x37, 0xE5, 0x81, 0x14, 0x18, 0x1B, 0x9F, 0xC1, 
	0x68, 0x7E, 0x0A, 0x85, 0x62, 0x11, 0x2E, 0x53, 0x10, 0x22, 
	0xB4, 0x01, 0x56, 0x2C, 0x25, 0x2C, 0x84, 0x44, 0x83, 0x60, 
	0xCB, 0x96, 0x4E, 0x6C, 0xDE, 0xDC, 0x59, 0x7B, 0x57, 0x47, 
	0x2B, 0x6D, 0x4F, 0x8C, 0xE0, 0xDC, 0x48, 0x25, 0xBC, 0x0A, 
	0x47, 0xA5, 0xCC, 0x91, 0x99, 0xC3, 0xA0, 0x42, 0x89, 0xC2, 
	0x54, 0x15, 0xBE, 0x08, 0x6C, 0x00, 0x33, 0x9F, 0xC2, 0x11, 
	0x33, 0x50, 0x83, 0x40, 0xB9, 0x04, 0x62, 0x0E, 0xEE, 0x06, 
	0x54, 0x97, 0xE1, 0x1B, 0x29, 0x97, 0x1C, 0xA1, 0x11, 0xCC, 
	0x78, 0x02, 0x5A, 0x2A, 0x40, 0x39, 0x48, 0xA4, 0x28, 0x5C, 
	0x0A, 0xBB, 0x4D, 0x51, 0x1F, 0x33, 0xDF, 0xD7, 0x87, 0x30, 
	0x8B, 0xAF, 0x3F, 0xDC, 0xFE, 0xF4, 0xFC, 0x5C, 0xE6, 0x27, 
	0xC6, 0x92, 0x70, 0x58, 0x0C, 0x4A, 0x0A, 0x7B, 0xF3, 0xEC, 
	0x33, 0x04, 0x78, 0xD8, 0x84, 0x20, 0x30, 0x62, 0xAE, 0xC0, 
	0x1C, 0x06, 0x3F, 0x2C, 0x43, 0x56, 0x62, 0x48, 0x36, 0x11, 
	0x50, 0x57, 0xD9, 0x0B, 0x16, 0x4A, 0xAD, 0x89, 0xD6, 0x1A, 
	0xB3, 0x79, 0xBC, 0x73, 0xD1, 0xF6, 0xFD, 0x6F, 0x75, 0x1F, 
	0xE3, 0x2A, 0x81, 0x78, 0xAA, 0x19, 0x04, 0xF6, 0x98, 0x59, 
	0xA8, 0x11, 0xB1, 0x78, 0x0A, 0x03, 0xE7, 0x4E, 0x42, 0x08, 
	0x0F, 0x00, 0x05, 0xA4, 0x86, 0x46, 0x94, 0x68, 0xC4, 0x9A, 
	0x20, 0x93, 0x8E, 0x23, 0x9E, 0x58, 0x7E, 0x9A, 0xA1, 0x81, 
	0xE1, 0x1B, 0x93, 0xF1, 0x6A, 0xB9, 0x88, 0x64, 0xC2, 0x83, 
	0x28, 0x7B, 0x90, 0x4E, 0x12, 0x4A, 0x13, 0x44, 0x3F, 0x37, 
	0x96, 0x04, 0x35, 0x6B, 0x11, 0x4A, 0x04, 0x5C, 0x02, 0x90, 
	0x60, 0x84, 0xC0, 0x31, 0xD2, 0x18, 0x63, 0x48, 0x98, 0x59, 
	0x85, 0x1C, 0xEF, 0x1F, 0xFC, 0xBE, 0x97, 0xA2, 0x81, 0xA9, 
	0xB2, 0x18, 0xD8, 0xF7, 0xD9, 0xB9, 0x03, 0x07, 0x8F, 0x0E, 
	0x8C, 0xFD, 0xFA, 0xFB, 0x30, 0x0A, 0xF9, 0x11, 0x68, 0x3E, 
	0x01, 0xC8, 0x19, 0x70, 0xE1, 0xA3, 0x58, 0x1C, 0xB7, 0x62, 
	0x7B, 0x66, 0x19, 0x10, 0x8F, 0x69, 0x48, 0x21, 0x70, 0xF5, 
	0x5A, 0x01, 0x47, 0x8F, 0x8F, 0x8C, 0x7F, 0xDC, 0x3B, 0xFC, 
	0x79, 0x7E, 0x32, 0x38, 0x63, 0xB7, 0xA2, 0x91, 0x18, 0x23, 
	0x89, 0x5C, 0xB3, 0xDB, 0x3C, 0x5D, 0x91, 0xF7, 0x65, 0x52, 
	0x6C, 0xD7, 0xB2, 0x85, 0xC9, 0x67, 0xBB, 0x56, 0x67, 0x57, 
	0xAE, 0x58, 0x3A, 0x97, 0xE4, 0xE6, 0x37, 0x63, 0x74, 0x34, 
	0x8F, 0x52, 0x79, 0x06, 0x63, 0x13, 0x01, 0xFE, 0xBA, 0x5A, 
	0x19, 0x19, 0x9D, 0x14, 0xDF, 0x55, 0x7C, 0xF9, 0x6D, 0x92, 
	0xE1, 0xFA, 0x4C, 0xA0, 0xA7, 0xB9, 0x84, 0x87, 0x48, 0x3C, 
	0x7B, 0x44, 0xA4, 0x12, 0x14, 0x8B, 0x73, 0x31, 0x44, 0xA4, 
	0xE3, 0xC4, 0x4D, 0xB9, 0x24, 0xC5, 0x1C, 0xB2, 0x2E, 0x9D, 
	0xA4, 0xFB, 0x3B, 0x57, 0xA6, 0x4F, 0xB5, 0x2F, 0x8B, 0x9D, 
	0x9E, 0x93, 0x20, 0x1F, 0x30, 0x07, 0x6B, 0x5D, 0x8A, 0x94, 
	0x11, 0xBA, 0x30, 0x64, 0x53, 0x66, 0x11, 0x27, 0x88, 0xF8, 
	0x0F, 0x6B, 0x42, 0xB7, 0xC1, 0x70, 0x9E, 0x06, 0xE2, 0x00, 
	0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 
	0x82, 
};

wxBitmap& ark_addfile_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( ark_addfile_png, sizeof( ark_addfile_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
};


#endif //ARK_ADDFILE_PNG_H