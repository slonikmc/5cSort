//
// Created by Akelk on 14.03.2022.
//

#include "generatingFuncs.h"

void generateRandomArray(int *a, const size_t n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        a[i] = rand();
    }
}

void generateOrderedArray(int *a, const size_t n) {
    for (size_t i = 0; i < n; i++)
        a[i] = (int)i;
}

void generateOrderedBackwards(int *a, const size_t n) {
    for (size_t i = n; i > 0; i--)
        a[i] = n - i;
}
