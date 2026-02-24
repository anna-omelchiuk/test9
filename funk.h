#ifndef FUNK_H
#define FUNK_H

#include <iostream>

// Завдання 1

int* AllocateArr(int size);

void InitArr(int* arr, int size);

void PrintArr(const int* arr, int size);

void DelArr(int* arr);

void AddElem(int*& arr, int& size, int value);

void InsertElem(int*& arr, int& size, int index, int value);

void RemoveElem(int*& arr, int& size, int index);

// Завдання 2


int* RemovePrimes(const int* arr, int size, int& newSize);

// Завдання 3


void SplitBySign(const int* arr, int size,  
    int*& positives, int& posSize,
    int*& negatives, int& negSize,
    int*& zeros, int& zeroSize);  

#endif // FUNK_H
