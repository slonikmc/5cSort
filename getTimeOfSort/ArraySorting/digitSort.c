//
// Created by Akelk on 14.03.2022.
//

#include "digitSort.h"
#include <malloc.h>

void digitSort(int *a, const size_t n) {
    int step = 8;
    int mask = 1 << step;
    int *buffer = (int *) malloc(sizeof(int) * n);
    int *values = (int *) malloc(sizeof(int) * mask);
    for (int byte = 0; byte < sizeof(int); byte++) {
        for (int i = 0; i < mask; i++)
            values[i] = 0;

        for (int i = 0; i < n; i++)
            values[a[i] >> (byte * step) & (mask - 1)]++;

        for (int i = 1; i < mask; i++)
            values[i] += values[i - 1];

        for (int i = (int)n - 1; i >= 0; i--)
            buffer[--values[a[i] >> (byte * step) & (mask - 1)]] = a[i];

        for (int i = 0; i < n; i++)
            a[i] = buffer[i];
    }

    free(buffer);
    free(values);
}

