cmake_minimum_required (VERSION 3.14)

project(basic_render)

add_executable(${PROJECT_NAME} 
				${PROJECT_SOURCE_DIR}/src/main.cpp
				${PROJECT_SOURCE_DIR}/src/tests.cpp )
target_include_directories(${PROJECT_NAME} PUBLIC 
				${PROJECT_SOURCE_DIR}/include/
				${PROJECT_SOURCE_DIR}/src/ )