#include <HelloProjConfig.h>
#include <iostream>

// j'ai fait les nv cmake config oui

void hello_world()
{
    std::cout << "Hello World!\n";
}
void print_version()
{
    std::cout << "project version is " << HelloProj_VERSION_MAJOR << "."

              << HelloProj_VERSION_MINOR << std::endl;
}

// j'ai fait les nv cmake config

void hello_world()
{
    std::cout << "Hello World!\n";
}

void print_version()
{
    std::cout << "project version is " << HelloProj_VERSION_MAJOR << "."
              << HelloProj_VERSION_MINOR << std::endl;
}
int main()
{
    hello_world();
    print_version();
}
