#ifndef FUNK_H
#define FUNK_H

#include <iostream>

// Завдання 1

int* AllocateArr(int size);   // Прототип розподілу динамічної пам'яті.

void InitArr(int* arr, int size);  // Прототип ініціалізації динамічного масиву.

void PrintArr(const int* arr, int size);  // Прототип друку динамічного масиву.

void DelArr(int* arr);  // Прототип видалення динамічного масиву.

void AddElem(int*& arr, int& size, int value);  // Прототип додавання елемента в кінець масиву.

void InsertElem(int*& arr, int& size, int index, int value); // Прототип вставки елемента за вказаним індексом.

void RemoveElem(int*& arr, int& size, int index);  // Прототип видалення елемента за вказаним індексом.

// Завдання 2


int* RemovePrimes(const int* arr, int size, int& newSize);  // Прототип, який отримує покажчик на динамічний масив і його розмір.

// Завдання 3


void SplitBySign(const int* arr, int size,  
    int*& positives, int& posSize,
    int*& negatives, int& negSize,
    int*& zeros, int& zeroSize);    // Прототип, який отримує покажчик на статичний масив і його розмір. 

#endif // FUNK_H
