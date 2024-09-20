#add the executable target named HelloWorld
add_executable(HelloWorld hello.cpp)
target_link_libraries(HelloWorld PRIVATE basic)
# on ne met que les librairies qui s'appelle basic

#install target helloworld
install(TARGETS HelloWorld DESTINATION bin)