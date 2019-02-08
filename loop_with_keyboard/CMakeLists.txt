cmake_minimum_required(VERSION 2.8.12)

set(SDL2_PATH /home/user/Downloads/SDL2-build)

project(loop_with_keyboard)

add_executable(${PROJECT_NAME} "./src/main.cpp")
target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)
target_include_directories(${PROJECT_NAME} PUBLIC ./include/)
target_link_libraries(${PROJECT_NAME}
                        ${SDL2_PATH}/libSDL2d.a -lm -ldl -lpthread -lrt)




