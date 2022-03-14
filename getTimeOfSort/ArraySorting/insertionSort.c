//
// Created by Akelk on 14.03.2022.
//

#include "insertionSort.h"

void insertionSort(int *a, const size_t n) {
    for (size_t i = 1; i < n; i++) {
        int t = a[i];
        int j = i;
        while (j > 0 && a[j - 1] > t) {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = t;
    }
}
