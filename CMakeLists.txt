cmake_minimum_required(VERSION 3.21)
project(Ex_Algo_5)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ex_Algo_5 main.cpp)
add_executable(HomRun Homogenization.cpp)
add_executable(runTree ConvertGrophToTree.cpp)
add_executable(runWolf WolfOfWallstreet.cpp)
add_executable(runTest test.cpp)
add_executable(runHax HaxaNawardi.cpp)