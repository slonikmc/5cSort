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

long long getShellSortNComp(int *a, const size_t n) {
    long long nComps = 0;
    for (int s = n / 2; s > 0 && ++nComps; s /= 2)
        for (int i = s; i < n && ++nComps; ++i)
            for (int j = i - s; j >= 0 && a[j] > a[j + s]; j -= s) {
                nComps += 2;
                swap(&a[j], &a[j + s]);
            }

    return nComps;
}