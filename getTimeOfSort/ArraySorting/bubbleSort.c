//
// Created by Akelk on 14.03.2022.
//

#include "bubbleSort.h"
void bubbleSort(int *a, const size_t n) {
    for (size_t i = 0; i < n - 1; i++)
        for (size_t j = n - 1; j > i; j--)
            if (a[j - 1] > a[j])
                swap(&a[j - 1], &a[j]);
}