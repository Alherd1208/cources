#pragma once
#include "screen.h"
#include <fstream>
#include <string>

namespace my
{

	template <size_t N>
	void PrintScreen(const std::string& file_name, screen<N>& save_screen)
	{
		std::ofstream out_file;
		out_file.exceptions(std::ios_base::failbit);
		out_file.open(file_name, std::ios_base::binary);
		out_file << "P6\n" << save_screen.width << ' ' << save_screen.height << ' ' << 255 << '\n';
		out_file.write(reinterpret_cast<const char*>(&save_screen.buffer), sizeof(color) * N);
	}

	template <size_t N>
	void LoadImage(const std::string& file_name, std::array<color, N>& image)
	{
		std::ifstream in_file;
		in_file.exceptions(std::ios_base::failbit);
		in_file.open(file_name, std::ios_base::binary);
		std::string header;
		size_t      image_width = 0;
		size_t      image_height = 0;
		std::string color_format;
		in_file >> header >> image_width >> image_height >> color_format >> std::ws;
		if (N != image_height * image_width)
		{
			throw std::runtime_error("image size not match");
		}

		in_file.read(reinterpret_cast<char*>(&image), sizeof(color) * N);
	}


}
