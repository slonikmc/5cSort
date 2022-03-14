//
// Created by Akelk on 14.03.2022.
//

#ifndef INC_5C_GETTIMEOFSORT_H
#define INC_5C_GETTIMEOFSORT_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include "../getTimeOfSort/arrayFunctions/arrayFunctions.h"
#include "../getTimeOfSort/ArraySorting/bubbleSort.h"
#include "../getTimeOfSort/ArraySorting/selectionSort.h"
#include "../getTimeOfSort/ArraySorting/insertionSort.h"
#include "../getTimeOfSort/ArraySorting/combSort.h"
#include "../getTimeOfSort/ArraySorting/ShellSort.h"
#include "../getTimeOfSort/ArraySorting/digitSort.h"

#include "../getTimeOfSort/generatingFuncs/generatingFuncs.h"

// функция сортировки
typedef struct SortFunc {
    void (*sort)(int *a, size_t n); // указатель на функцию сортировки
    char name[64]; // имя сортировки, используемое при выводе
} SortFunc;

// функция генерации
typedef struct GeneratingFunc {
    void (*generate)(int *a, size_t n); // указатель на функцию генерации последовательности.
    char name[64]; // имя генератора, используемое при выводе
} GeneratingFunc;

void checkTime(void (*sort)(int *, size_t),
               void (*generate)(int *, size_t),
               size_t size, char *experimentName);

void timeExperiment();

#endif //INC_5C_GETTIMEOFSORT_H
