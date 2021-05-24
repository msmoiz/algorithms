cmake_minimum_required(VERSION 3.0)
project(fundamentals)

add_executable(counter counter.cpp countermain.cpp)
add_executable(collectionsclient collectionsclient.cpp)
target_link_libraries(collectionsclient 
	utils
	collections)

add_executable(doublingtest doublingtest.cpp)
target_link_libraries(doublingtest
	utils)

add_executable(unionfind unionfind.cpp)