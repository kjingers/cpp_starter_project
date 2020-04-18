cmake_minimum_required(VERSION 3.17)
project(cpp_starter_project)

if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

#find_package (Boost COMPONENTS program_options REQUIRED)

find_package(Boost)
if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
endif()

message("Boost Include Dirs: ${Boost_INCLUDE_DIRS}")

add_executable(intro main.cpp)
target_compile_features(intro PRIVATE cxx_lambda_init_captures)
