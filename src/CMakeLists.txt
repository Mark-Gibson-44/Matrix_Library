cmake_minimum_required(VERSION 3.10)

project(Matrix_Lib)


#add_subdirectory(Tests)
add_executable(run main.cpp Matrix.h)






target_include_directories(run PUBLIC "${PROJECT_BINARY_DIR}")

