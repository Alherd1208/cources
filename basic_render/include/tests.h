#pragma once
#include "screen.h"


namespace run
{

	////////// draw one line  ///////////
	template<size_t N>
	static void test_01(screen<N>& scr);

	//////// draw a lot of lines  /////////
	template<size_t N>
	static void test_02(screen<N>& scr);

	///////// draw one triangle  //////////
	template<size_t N>
	static void test_03(screen<N>& scr);

	////// draw grid of triangles /////////
	template <size_t N>
	static void test_04(screen<N>& scr);

	/////// draw filled triangle //////////
	template <size_t N>
	static void test_05(screen<N>& scr);

}