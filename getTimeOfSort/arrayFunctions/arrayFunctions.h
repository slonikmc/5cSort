//
// Created by Akelk on 14.03.2022.
//

#ifndef INC_5C_ARRAYFUNCTIONS_H
#define INC_5C_ARRAYFUNCTIONS_H

#include <stdio.h>
#include <stdbool.h>

void inputArray(int *a, const size_t n);

void outputArray(int *a, const size_t n);

int linearSearch(const int *a, const size_t n, const int x);

int linearSearchNegative(const int *a, const size_t n);

int linearSearchIf(const int *a, const size_t n, int (*f)(int));

int linearSearchLastEven(const int *a, const size_t n);

int linearSearchLastIf(const int *a, const size_t n, int (*f)(int));

int getNegativeCount(const int *a, const size_t n);

int getCountIf(const int *a, const size_t n, int (*f)(int));

void reverseArray(int *a, const size_t n);

int checkingPalindrome(const int *a, const size_t n);

void selectionSortByNonDecrease(int *a, const size_t n);

void removeOddElements(int *a, size_t *n);

void addElement(int *a, const int x, const size_t pos, size_t *n);

void addLastElement(int *a, const int x, size_t *n);

void deleteByPosSaveOrder(int *a, const size_t pos, size_t *n);

void deleteByPosDontSaveOrder(int *a, size_t *n, size_t pos);

void forEach(int *a, const size_t n);

int any(int *a, size_t n, int (*f)(int));

int all(int *a, size_t n, int (*f)(int));

void swap(int *a, int *b);

// Возвращает 'истина', если массив a размера n отсортирован в порядке неубывания,
// 'ложь' в противном случае.
bool isOrdered(const int *a, const size_t n);

#endif //INC_5C_ARRAYFUNCTIONS_H
