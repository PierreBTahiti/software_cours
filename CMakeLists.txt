cmake_minimum_required(VERSION 3.10)

# set the project name
project(HelloProj VERSION 3.0)

#export configuration to source code
configure_file(HelloProjConfig.h.in HelloProjConfig.h)

#specify the C++ standard
# use the CMAKE_CXX8STANDARD variable
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED TRUE)


#add the executable target named HelloWorld
add_executable(HelloWorld hello.cpp)

# add binary tree to the list of paths to search includes
target_include_directories(HelloWorld PUBLIC "${PROJECT_BINARY_DIR}")
