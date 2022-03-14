//
// Created by Akelk on 14.03.2022.
//

#include "ShellSort.h"

void ShellSort(int *a, const size_t n) {
    for (int s = n / 2; s > 0; s /= 2)
        for (int i = s; i < n; ++i)
            for (int j = i - s; j >= 0 && a[j] > a[j + s]; j -= s)
                swap(&a[j], &a[j + s]);
}