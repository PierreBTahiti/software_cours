#add the executable target named HelloWorld
add_executable(HelloWorld hello.cpp)
target_link_libraries(HelloWorld PRIVATE basic)
# one met que les librairies qui s'appelle basic
