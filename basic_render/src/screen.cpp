#pragma once
#include "screen.h"

// clear color { 255 , 255 , 255}
template <size_t N>
void screen<N>::ClearBuffer()
{
	for (size_t i = 0; i < width * height; ++i)
	{
		buffer[i] = { 255 , 255 , 255 };
	}
}

template <size_t N>
void screen<N>::test_print()
{
	for (size_t y = 0; y < width; ++y)
	{
		for (size_t x = 0; x < height; ++x)
		{
			std::cout << " r " << (int)buffer[y * width + x].r <<
				" g " << (int)buffer[y * width + x].g <<
				" b " << (int)buffer[y * width + x].b;
		}
	}
}









