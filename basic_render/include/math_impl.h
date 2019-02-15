#pragma once
#include <vector>

namespace my
{

	//true if x is bigger
	// val[0] - x_difference
	// val[1] - y_difference
	static bool compare(vector2d start, vector2d end, int32_t val[2])
	{
		val[0] = start.x - end.x;
		val[1] = start.y - end.y;
		if (abs(val[0]) < abs(val[1]))
		{
			return false;
		}
		else
		{
			return true;
		}
	}


	// need big optimization
	static std::vector<vector2d> interpolate(vector2d start, vector2d end)
	{
		std::vector<vector2d> indexes;
		int32_t differ[2];
		bool is_x_bigger = compare(start, end, differ);

		int8_t x_index = 0;
		int8_t y_index = 0;

		x_index = differ[0] > 0 ? -1 : 1;
		y_index = differ[1] > 0 ? -1 : 1;

		double cur_err = 0;
		double step_err = 0;

		int16_t cur_x = start.x;
		int16_t cur_y = start.y;

		int16_t last_index;
		if (is_x_bigger)
		{
			step_err = abs((double)differ[0] / (double)differ[1]);
			last_index = abs(differ[0]) + 1;

			for (uint16_t i = 0; i < last_index + 1; ++i)
			{
				if (cur_err < step_err)
				{
					cur_err += 1;
					indexes.push_back(vector2d(cur_x, cur_y));
					cur_x += x_index;
				}
				else
				{
					cur_err -= step_err;
					cur_err += 1;
					cur_y += y_index;
					indexes.push_back(vector2d(cur_x, cur_y));
					cur_x += x_index;
				}
			}
		}
		else
		{
			step_err = abs((double)differ[1] / (double)differ[0]);
			last_index = abs(differ[1]);

			for (uint16_t i = 0; i < last_index + 1; ++i)
			{
				if (cur_err < step_err)
				{
					indexes.push_back(vector2d(cur_x, cur_y));
					cur_err += 1;
					cur_y += y_index;
				}
				else
				{
					cur_err -= step_err;
					cur_x += x_index;
					indexes.push_back(vector2d(cur_x, cur_y));
					cur_err += 1;
					cur_y += y_index;
				}
			}
		}


		return indexes;
	}



}







