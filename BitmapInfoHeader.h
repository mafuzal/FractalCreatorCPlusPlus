#ifndef BITMAPINFOHEADER_H_
#define BITMAPINFOHEADER_H_

#include <cstdint>

using namespace std;
#pragma pack(2)

struct BitmapInfoHeader{
	int32_t headerSize{40};
	int32_t width;
	int16_t height;
	int16_t planes{1};
	int16_t bitsPerPixel{24};
	int32_t compression{0};
	int32_t dataSize{24};
	int32_t compression{0};
	int32t_t dataSize{0};
	
}