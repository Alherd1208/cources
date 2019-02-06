cmake_minimum_required(VERSION 2.8.12)


project(static_lib)
add_executable(${PROJECT_NAME} "main.cpp")
set(SDL2 /home/user/Downloads/SDL2-build/libSDL2d.a)
message(${SDL2})


target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

target_link_libraries(${PROJECT_NAME} ${SDL2} -lm -ldl -lpthread)
target_include_directories(${PROJECT_NAME} PUBLIC
    /home/user/Downloads/SDL2-build/include/)
