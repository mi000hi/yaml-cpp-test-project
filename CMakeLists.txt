cmake_minimum_required(VERSION 3.10)

# set the project name
project(yaml_test)

# add subdirectory so that cmake can find the yaml-cpp library in there
add_subdirectory(yaml-cpp-yaml-cpp-0.6.0)

# create the executable (build our project)
add_executable(yaml_test main.cpp)

# make sure our project finds the header files of the library
target_include_directories(yaml_test PUBLIC "yaml-cpp-yaml-cpp-0.6.0/include")

# link the library to our executable
target_link_libraries(yaml_test PUBLIC yaml-cpp)
