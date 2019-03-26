cmake_minimum_required(VERSION 2.8)

project(NumberVeryficator)
include_directories(include)
file(GLOB SOURCES "*.cpp")
file(GLOB HEADERS "*.h")
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
