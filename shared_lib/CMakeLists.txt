cmake_minimum_required(VERSION 2.8.12)
set(SDL2_PATH /home/user/Downloads/SDL2-build)

project(shared_lib)
add_executable(${PROJECT_NAME} "main.cpp")
set(SDL2 ${SDL2_PATH}/libSDL2-2.0d.so)
set(ENV{LD_LIBRARY_PATH} ${SDL2_PATH}/)



target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

target_link_libraries(${PROJECT_NAME} ${SDL2} -lm -ldl -lpthread)
target_include_directories(${PROJECT_NAME} PUBLIC
	${PROJECT_SOURCE_DIR}/include/)
