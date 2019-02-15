#include "includes.h"



constexpr size_t width = 640;
constexpr size_t height = 480;
constexpr size_t buffer_size = width * height;

screen<buffer_size> screen_01(width, height);
screen<buffer_size> screen_02(width, height);
screen<buffer_size> screen_03(width, height);
screen<buffer_size> screen_04(width, height);

int main()
{

	////////// draw one line  ///////////
	screen_01.ClearBuffer();
	run::test_01(screen_01);
	my::PrintScreen("image_01.ppm", screen_01);

	//////// draw a lot of lines  /////////
	screen_02.ClearBuffer();
	run::test_02(screen_02);
	my::PrintScreen("image_02.ppm", screen_01);

	///////// draw one triangle  //////////
	screen_03.ClearBuffer();
	run::test_03(screen_03);
	my::PrintScreen("image_03.ppm", screen_01);

	////// draw grid of triangles /////////
	screen_04.ClearBuffer();
	run::test_04(screen_04);
	my::PrintScreen("image_04.ppm", screen_01);



	std::cout << "End of program" << std::endl;
	std::cin.get();
	return 0;
}