//
// Created by Akelk on 14.03.2022.
//

#include "arrayFunctions.h"

#include <stdio.h>
#include <math.h>


#define EPS 0.000001

//1
// ввод массива a размера n
void inputArray(int *a, const size_t n) {
    for (size_t i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

//2
// вывод массива a размера int n
void outputArray(int *a, const size_t n) {
    for (size_t i = 0; i < n; i++)
        printf("%d ", a[i]);
}

//3
// возвращает позицию первого элемента со значением x в массиве a размера n
// если такого элемента нет возвращает -1
int linearSearch(const int *a, const size_t n, const int x) {
    for (size_t i = 0; i < n; i++)
        if (a[i] == x)
            return i;
    return -1;
}

//4
// возвращает позицию первого отрицательного элемента в массиве a размера n
// если такого элемента нет возвращает -1
int linearSearchNegative(const int *a, const size_t n) {
    for (size_t i = 0; i < n; i++)
        if (a[i] < 0)
            return i;
    return -1;
}

//5
// возвращает позицию первого с начала элемента
// в массиве a размера n по функции-предикату f
// если такого элемента нет возвращает -1
int linearSearchIf(const int *a, const size_t n, int (*f)(int)) {
    for (size_t i = 0; i < n; i++)
        if (f(a[i]))
            return i;
    return -1;
}

//6
// возвращает позицию первого с конца четного элемента
// в массиве a размера n
// если такого элемента нет возвращает -1
int linearSearchLastEven(const int *a, const size_t n) {
    for (size_t i = n - 1; i >= 0; i--) {
        if (a[i] % 2 == 0)
            return i;
    }
    return -1;
}

//7
// возвращает позицию первого с конца элемента
// в массиве a размера n по функции-предикату f
// если такого элемента нет возвращает -1
int linearSearchLastIf(const int *a, const size_t n, int (*f)(int)) {
    for (int i = n - 1; i >= 0; --i) {
        if (f(a[i]))
            return i;
    }
    return -1;
}

//8
// возвращает количество отрицательных элементов
// в массиве a размера n
int getNegativeCount(const int *a, const size_t n) {
    int count = 0;
    for (size_t i = 0; i < n; ++i) {
        if (a[i] < 0)
            count++;
    }
    return count;
}

//9
// возвращает количество элементов по функции-предикату f
// в массиве a размера n
int getCountIf(const int *a, const size_t n, int (*f)(int)) {
    int count = 0;
    for (size_t i = 0; i < n; ++i) {
        if (f(a[i]))
            count++;
    }
    return count;
}

//10
// обмен
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// изменяет порядок элементов массива a размера n на обратный
void reverseArray(int *a, const size_t n) {
    size_t middle = n / 2;
    for (size_t i = 0; i < middle; i++) {
        swap(&a[i], &a[n - (1 + i)]);
    }
}

//11
// возвращает 'истина' если последовательность массива a размера n
// является палиндромом, 'ложь' - в противном случае
int checkingPalindrome(const int *a, const size_t n) {
    size_t middle = n / 2;
    for (size_t i = 0; i < middle; i++) {
        if (a[i] != a[n - (1 + i)])
            return 0;
    }
    return 1;
}

// 12
// сортировка выбором массива a размера n по не убыванию
void selectionSortByNonDecrease(int *a, const size_t n) {
    for (size_t i = 0; i < n; ++i) {
        int minIndex = i;
        for (size_t j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex])
                minIndex = j;
        }
        swap(&a[i], &a[minIndex]);
    }
}


// 13
// удаляет из массива a размера n все нечетные элементы
void removeOddElements(int *a, size_t *n) {
    size_t iRead = 0;
    while (iRead < *n && a[iRead] % 2 == 0) {
        iRead++;
    }
    size_t iWrite = iRead;
    while (iRead < *n) {
        if (a[iRead] % 2 == 0) {
            a[iWrite] = a[iRead];
            iWrite++;
        }
        iRead++;
    }
    *n = iWrite;
}

// 14
// добавляет в массив a размера n элемент x по индексу pos
void addElement(int *a, const int x, const size_t pos, size_t *n) {
    (*n)++;
    size_t i = pos;
    while (i < *n) {
        (a[i + 1] = a[i]);
        i++;
    }
    a[pos - 1] = x;
}

//15
// добавляет в конец массива a размера n элемент x
void addLastElement(int *a, const int x, size_t *n) {
    (*n)++;
    a[*n - 1] = x;
}

// 16
// удаляет элемент по индексу pos в массиве a размера n
// с сохранением порядка других элементов
void deleteByPosSaveOrder(int *a, const size_t pos, size_t *n) {
    for (size_t i = pos; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--;
}

// 17
// удаляет элемент по индексу pos в массиве a размера n
// без сохранения порядка других элементов
void deleteByPosDontSaveOrder(int *a, size_t *n, size_t pos) {
    a[pos] = a[*n - 1];
    (*n)--;
}

void f(int *a) {
    *a *= 2;
}

// 19
// применяет функцию f к элементам массива a размера n
void forEach(int *a, const size_t n) {
    for (size_t i = 0; i < n; i++) {
        f(&a[i]);
    }
}

// 20
// возвращает 'истина' если хотя бы один элемент массива a размера n
// удовлетворяет условию функции-предиката, 'ложь' - в противном случае
int any(int *a, size_t n, int (*f)(int)) {
    for (size_t i = 0; i < n; ++i) {
        if (f(a[i]))
            return 1;
    }
    return 0;
}

// 21
// возвращает 'истина' если все элементы массива a размера n
// удовлетворяют условию функции-предиката, 'ложь' - в противном случае
int all(int *a, size_t n, int (*f)(int)) {
    for (size_t i = 0; i < n; ++i) {
        if (!f(a[i]))
            return 0;
    }
    return 1;
}

bool isOrdered(const int *a, const size_t n) {
    int lastElem = a[0];
    for (size_t i = 1; i < n; i++) {
        int curElem = a[i];
        if (lastElem > curElem)
            return false;
        lastElem = a[i];
    }

    return true;
}