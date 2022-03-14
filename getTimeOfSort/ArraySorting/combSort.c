//
// Created by Akelk on 14.03.2022.
//

#include "combSort.h"

void combSort(int *a, const size_t size) {
    size_t step = size;
    int swapped = 1;
    while (step > 1 || swapped) {
        if (step > 1)
            step /= 1.24733;
        swapped = 0;
        for (size_t i = 0, j = i + step; j < size; ++i, ++j)
            if (a[i] > a[j]) {
                swap(&a[i], &a[j]);
                swapped = 1;
            }
    }
}

long long getCombSortNComps(int *a, const size_t size) {
    long long nComps = 0;
    size_t step = size;
    int swapped = 1;
    while (step > 1 && ++nComps || swapped) {
        if (step > 1 && ++nComps)
            step /= 1.24733;
        swapped = 0;
        for (size_t i = 0, j = i + step; j < size && ++nComps; ++i, ++j)
            if (a[i] > a[j] && ++nComps) {
                swap(&a[i], &a[j]);
                swapped = 1;
            }
    }

    return nComps;
}
