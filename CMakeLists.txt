cmake_minimum_required(VERSION 3.20)
project(5c C)

set(CMAKE_C_STANDARD 11)

add_executable(5c main.c)

add_library(
        timeSort getTimeOfSort/getTimeOfSort.c getTimeOfSort/getTimeOfSort.h
        getTimeOfSort/ArraySorting/bubbleSort.c getTimeOfSort/ArraySorting/bubbleSort.h
        getTimeOfSort/arrayFunctions/arrayFunctions.c getTimeOfSort/arrayFunctions/arrayFunctions.h
        getTimeOfSort/generatingFuncs/generatingFuncs.c getTimeOfSort/generatingFuncs/generatingFuncs.h
        getTimeOfSort/ArraySorting/selectionSort.c getTimeOfSort/ArraySorting/selectionSort.h
        getTimeOfSort/ArraySorting/insertionSort.c getTimeOfSort/ArraySorting/insertionSort.h
        getTimeOfSort/ArraySorting/combSort.c getTimeOfSort/ArraySorting/combSort.h
        getTimeOfSort/ArraySorting/ShellSort.c getTimeOfSort/ArraySorting/ShellSort.h
        getTimeOfSort/ArraySorting/digitSort.c getTimeOfSort/ArraySorting/digitSort.h
)

target_link_libraries(5c timeSort)