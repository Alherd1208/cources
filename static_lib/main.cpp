#include <iostream>
#include "SDL2/SDL_version.h"

std::ostream& operator << (std::ostream& out , const SDL_version& v)
{
    out << (int)v.major << ".";
    out << (int)v.minor << ".";
    out << (int)v.patch;
    return out;
}

int main(int argc, char *argv[])
{
    SDL_version compiled = { 0 , 0 , 0 };
    SDL_version linked = { 0 , 0 , 0 };

    SDL_VERSION(&compiled);
    SDL_GetVersion(&linked);

    std::cout << "compiled: " << compiled << std::endl;
    std::cout << "linked: " << linked << std::endl;



    return std::cout.good() ? EXIT_SUCCESS : EXIT_FAILURE;
}
