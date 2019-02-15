#include "tests.h"
#include "file_actions.h"
#include "buffer_actions.h"
#include <array>
#include <vector>

namespace run
{
	////////// draw one line  ///////////
	template <size_t N>
	void test_01(screen<N>& scr) 
	{

		// start point
		vector2d start((int16_t)0 , (int16_t)scr.height / (int16_t)-2);

		//end point
		vector2d end((int16_t)scr.width , (int16_t)scr.height );

		// fill buffer
		DrawLine(start, end, scr, color(255, 0 , 0));

	}


	//////// draw a lot of lines  /////////
	template<size_t N>
	void test_02(screen<N>& scr)
	{

		for (size_t i = 0; i < 150; ++i)
		{
			int16_t x_st = rand() % (int16_t)scr.width;
			int16_t y_st = rand() % (int16_t)scr.height;
			int16_t x_end = rand() % (int16_t)scr.width;
			int16_t y_end = rand() % (int16_t)scr.height;

			uint8_t r = rand() % 256;
			uint8_t g = rand() % 256;
			uint8_t b = rand() % 256;

			color rand_color(r, g, b);

			DrawLine(vector2d(x_st, y_st), vector2d(x_end, y_end), scr, rand_color);
		}


	}


	///////// draw one triangle  //////////
	template <size_t N>
	void test_03(screen<N>& scr)
	{

		std::vector<triangle> triangles;
		triangle one_triangle;
		one_triangle.buf[0] = { (int16_t)0 , (int16_t)0 };
		one_triangle.buf[1] = { (int16_t)scr.width - 1 , (int16_t)0 };
		one_triangle.buf[2] = { (int16_t)scr.width - 1 , (int16_t)scr.height - 1 };
		triangles.push_back(one_triangle);

		DrawTriangles(triangles, scr, color{ 255 , 0 , 0 });


	}


	////// draw grid of triangles /////////
	template <size_t N>
	void test_04(screen<N>& scr)
	{

		uint8_t Grid_SizeX = 10;
		uint8_t Grid_SizeY = 10;

		std::vector<triangle> triangles;


		for (size_t y_it = 0 ; y_it < Grid_SizeY ; ++y_it)
		{
			for (size_t x_it = 0 ; x_it < Grid_SizeX ; ++x_it)
			{
				triangle one_triangle;
				int16_t x_pos = (int16_t)x_it * (int16_t)scr.width / Grid_SizeX;
				int16_t y_pos = (int16_t)y_it * (int16_t)scr.height / Grid_SizeX;
				one_triangle.buf[0] = { (int16_t)0 + x_pos , (int16_t)0 + y_pos};
				one_triangle.buf[1] = { (int16_t)scr.width - 1 + x_pos, (int16_t)0 + y_pos };
				one_triangle.buf[2] = { (int16_t)scr.width - 1 + x_pos, (int16_t)scr.height - 1 + y_pos };
				triangles.push_back(one_triangle);
			}
		}

		DrawTriangles(triangles, scr, color{ 255 , 0 , 0 });


	}

	/////// draw filled triangle //////////
	template <size_t N>
	void test_05(screen<N>& scr, const std::string& file_name)
	{

	}

}