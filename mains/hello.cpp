#include <HelloProjConfig.h>
#include <iostream>
<<<<<<< HEAD
//j'ai fait les nv cmake config


void hello_world() {
	
	
	std::cout << "Hello World!\n";
}
void print_version() {
	std::cout << "project version is "
		<< HelloProj_VERSION_MAJOR
		<< "."
		
		<< HelloProj_VERSION_MINOR
		<< std::endl;
=======

// j'ai fait les nv cmake config

void hello_world()
{
    std::cout << "Hello World!\n";
}

void print_version()
{
    std::cout << "project version is " << HelloProj_VERSION_MAJOR << "."
              << HelloProj_VERSION_MINOR << std::endl;
>>>>>>> ff8312810643151690449bd8608e76ba0597026f
}
int main()
{
    hello_world();
    print_version();
}
