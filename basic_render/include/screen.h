#pragma once
#include <iostream>
#include <array>
#include <fstream>

#pragma pack(push , 1)
class color
{
public:
	color(uint8_t r_, uint8_t g_, uint8_t b_)
		: r(r_), g(g_), b(b_) {};
	color()
		: r(0), g(0), b(0) {};
	uint8_t r;
	uint8_t g;
	uint8_t b;
};
#pragma pack(pop)

class vector2d
{
public:
	vector2d() : x(0) , y(0) {};
	vector2d(int16_t x_, int16_t y_) : x(x_), y(y_) {};
	int16_t x;
	int16_t y;
};

class triangle
{
public:
	triangle(){};
	triangle(std::array<vector2d, 3> buf_) : buf(buf_) {};
	std::array<vector2d, 3> buf;
};


template <size_t N>
class screen
{
public:
	screen(size_t x, size_t y)
		: width(x), height(y) {};

	
	void ClearBuffer();

	void test_print();
	size_t width;
	size_t height;
	std::array<color, N> buffer;
private:
};




