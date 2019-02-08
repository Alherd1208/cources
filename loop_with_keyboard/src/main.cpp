#include <iostream>
#include <array>
#include <algorithm>
#include <string_view>
#include "SDL2/SDL.h"


std::ostream& operator << (std::ostream& out , const SDL_version& v)
{
    out << (int)v.major << '.';
    out << (int)v.minor << '.';
    out << (int)v.patch ;
    return out;
}

#pragma pack(push , 4)
struct bind
{
    SDL_Keycode          key;
    std::string_view     name;
};
#pragma pack(pop)

void check_input(const SDL_Event &);

int main(int argc, char *argv[])
{
    using namespace std;
    SDL_version compiled = { 0 , 0 , 0 };
    SDL_version linked = { 0 , 0 , 0 };

    SDL_VERSION(&compiled);
    SDL_GetVersion(&linked);

    if(SDL_VERSIONNUM(compiled.major , compiled.minor , compiled.patch) !=
            SDL_VERSIONNUM(linked.major , linked.minor , linked.patch))
    {
        cerr << "Warning : SDL2 compiled and linked version mismatch: "
             << compiled << " " << linked << endl;
    }

    const int init_result = SDL_Init(SDL_INIT_EVERYTHING);
    if (init_result != 0)
    {
        cerr << "Error : faied call SDL_Init function " << SDL_GetError() << endl;
        return EXIT_FAILURE;
    }

    SDL_Window* const window =
            SDL_CreateWindow("title" , SDL_WINDOWPOS_CENTERED ,
                             SDL_WINDOWPOS_CENTERED , 640 , 480 , SDL_WINDOW_OPENGL);

    if (window == nullptr)
    {
        cerr << "Error : faied to call SDL_CreateWindow: " << SDL_GetError() << endl;
        SDL_Quit();
        return EXIT_FAILURE;
    }

    bool continue_loop = true;
    while(continue_loop)
    {
        SDL_Event sdl_event;

        while (SDL_PollEvent(&sdl_event))
        {
            switch (sdl_event.type)
            {
                case SDL_KEYDOWN:
                    check_input(sdl_event);
                    break;
                case SDL_KEYUP:
                    check_input(sdl_event);
                    break;
                case SDL_QUIT:
                    continue_loop = false;
                    break;
                default:
                    break;
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}




void check_input(const SDL_Event & event)
{
    using namespace std;

    const array<bind , 8> keys { { {SDLK_w , "up"},
                                   {SDLK_a , "left"},
                                   {SDLK_s , "down"},
                                   {SDLK_d , "right"},
                                   {SDLK_LCTRL , "button_one"},
                                   {SDLK_SPACE , "button_two"},
                                   {SDLK_ESCAPE , "select"},
                                   {SDLK_RETURN , "start"} } };
    const auto it = find_if(begin(keys) , end(keys) , [&] (const bind& b) {
            return b.key == event.key.keysym.sym;
                          });

    if(it != end(keys))
    {
        cout << it->name << ' ';
        if(event.type == SDL_KEYDOWN)
        {
            cout << "is pressed" << endl;
        }
        else
        {
            cout << "is released" << endl;
        }
    }


}
