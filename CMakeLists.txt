cmake_minimum_required(VERSION 3.10)

# set the project name
project(HelloProj VERSION 1.0)

#export configuration to source code
configure_file(cmake/HelloProjConfig.h.in HelloProjConfig.h)

#specify the C++ standard
# use the CMAKE_CXX8STANDARD variable
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED TRUE)

#add libraries
add_subdirectory(src/basic)


#add executable, et change la direction vers mains où est le nouveau cmakelists.txt 
option(HELLOWORD_WITH_EXECUTABLES "Compile mains" ON)
if(HELLOWORD_WITH_EXECUTABLES)
	message(STATUS "Configuring Hello World with executables")
	add_subdirectory(mains)
endif()

#add tests
option(HELLOWORD_WITH_TESTS "Compile tests" ON)
if (HELLOWORD_WITH_TESTS)
	enable_testing() #active le module CTest
	message(STATUS "Configuring Hello World with tests")
	add_subdirectory(tests)
endif()