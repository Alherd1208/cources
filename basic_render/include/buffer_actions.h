#pragma once
#include "screen.h"
#include "math_impl.h"


	template <size_t N>
	void SetPixels(const std::vector<vector2d>& new_pixels, screen<N>& src, color col)
	{
		for (uint32_t i = 0; i < new_pixels.size(); ++i)
		{
			int32_t index = (int32_t)new_pixels[i].y * (int32_t)src.width + (int32_t)new_pixels[i].x;
			if (index < src.buffer.size() && index >= 0)
				src.buffer[index] = col;
		}

	}

	template <size_t N>
	void DrawLine(const vector2d start, const vector2d end, screen<N>& cur_scr, color col)
	{

		std::vector<vector2d> new_pixels = my::interpolate(start, end);

		SetPixels(new_pixels, cur_scr, col);


	}

	template <size_t N>
	void DrawTriangles(std::vector<triangle> triangles, screen<N>& cur_src, color col)
	{
		for (size_t i = 0; i < triangles.size(); ++i)
		{
			for (size_t i1 = 0; i1 < 3; ++i1)
			{
				DrawLine(triangles[i].buf[0], triangles[i].buf[1], cur_src, col);
				DrawLine(triangles[i].buf[1], triangles[i].buf[2], cur_src, col);
				DrawLine(triangles[i].buf[2], triangles[i].buf[0], cur_src, col);
			}
		}
	}





