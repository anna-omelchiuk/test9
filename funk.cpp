#include "funk.h"
#include <iostream>
using namespace std;

bool IsPrime(int num) 
{
    if (num <= 1) 
        return false;
    if (num == 2) 
        return true;
    if (num % 2 == 0) 
        return false;
    for (int i = 3; i * i <= num; i += 2) 
    {
        if (num % i == 0) 
            return false;
    }
    return true;
}

// Завдання 1

int* Allocate(int size)
{
    return new int[size];
}

void InitArr(int* arr, int size)
{
    cout << "Ââåä³òü " << size << " åëåìåíò³â: ";
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }
}

void PrintArr(const int* arr, int size)
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void DelArr(int* arr)
{
    delete[] arr;
}

void AddElem(int*& arr, int& size, int value)
{
    int* newArr = new int[size + 1];
    for (int i = 0; i < size; i++) 
    {
        newArr[i] = arr[i];
    }
    newArr[size] = value;
    delete[] arr;
    arr = newArr;
    size++;
}

void InsertElem(int*& arr, int& size, int index, int value)
{
    if (index < 0 || index > size) 
    {
        cout << "Íåâ³ðíèé ³íäåêñ!\n";
        return;
    }
    int* newArr = new int[size + 1];
    for (int i = 0; i < index; i++) 
    {
        newArr[i] = arr[i];
    }
    newArr[index] = value;
    for (int i = index; i < size; i++) 
    {
        newArr[i + 1] = arr[i];
    }
    delete[] arr;
    arr = newArr;
    size++;
}

void RemoveElem(int*& arr, int& size, int index)
{
    if (index < 0 || index >= size) 
    {
        cout << "Íåâ³ðíèé ³íäåêñ!\n";
        return;
    }
    int* newArr = new int[size - 1];
    for (int i = 0; i < index; i++) 
    {
        newArr[i] = arr[i];
    }
    for (int i = index + 1; i < size; i++) 
    {
        newArr[i - 1] = arr[i];
    }
    delete[] arr;
    arr = newArr;
    size--;
}

// Завдання 2

int* RemovePrimes(const int* arr, int size, int& newSize)  

{
    newSize = 0;
    for (int i = 0; i < size; i++) 
    {
        if (!IsPrime(arr[i])) newSize++;
    }

    int* result = new int[newSize];
    int idx = 0;
    for (int i = 0; i < size; i++) 
    {
        if (!IsPrime(arr[i])) 
        {
            result[idx++] = arr[i];
        }
    }
    return result;
}

// Завдання 3

void SplitBySign(const int* arr, int size,
    int*& positives, int& posSize,
    int*& negatives, int& negSize,
    int*& zeros, int& zeroSize) 
{
    posSize = negSize = zeroSize = 0;

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] > 0) posSize++;
        else if (arr[i] < 0) negSize++;
        else zeroSize++;
    }

    positives = new int[posSize];
    negatives = new int[negSize];
    zeros = new int[zeroSize];

    int p = 0, n = 0, z = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] > 0) positives[p++] = arr[i];
        else if (arr[i] < 0) negatives[n++] = arr[i];
        else zeros[z++] = arr[i];
    }
}
