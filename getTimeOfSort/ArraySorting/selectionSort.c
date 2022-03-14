//
// Created by Akelk on 14.03.2022.
//

#include "selectionSort.h"

void selectionSort(int *a, const size_t n) {
    for (int i = 0; i < n - 1; i++) {
        int minPos = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[minPos])
                minPos = j;
        swap(&a[i], &a[minPos]);
    }
}
