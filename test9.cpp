#include <iostream>
#include "funk.h"
using namespace std;

int main() 
{
    int choice;
    cout << "Введіть номер завдання (1, 2, 3): ";
    cin >> choice;

    switch (choice) 
    {
    case 1: 
    {
        cout << "\nЗавдання 1: Робота з динамічним масивом \n";
        int size;
        cout << "Введіть початковий розмір масиву: ";
        cin >> size;

        int* arr = AllocateArr(size);
        InitArr(arr, size);

        cout << "Масив після ініціалізації: ";
        PrintArr(arr, size);

        int value;
        cout << "Введіть елемент для додавання в кінець: ";
        cin >> value;
        AddElem(arr, size, value);
        cout << "Після додавання в кінець: ";
        PrintArr(arr, size);

        int index;
        cout << "Введіть індекс і значення для вставки: ";
        cin >> index >> value;
        InsertElem(arr, size, index, value);
        cout << "Після вставки: ";
        PrintArr(arr, size);

        cout << "Введіть індекс для видалення: ";
        cin >> index;
        RemoveElem(arr, size, index);
        cout << "Після видалення: ";
        PrintArr(arr, size);

        DelArr(arr);
        break;
    }

    case 2: 
    {
        cout << "\nЗавдання 2: Видалення простих чисел\n";
        int size;
        cout << "Введіть розмір масиву: ";
        cin >> size;

        int* arr = AllocateArr(size);
        InitArr(arr, size);

        cout << "Оригінальний масив: ";
        PrintArr(arr, size);

        int newSize;
        int* result = RemovePrimes(arr, size, newSize);

        cout << "Масив без простих чисел: ";
        PrintArr(result, newSize);

        DelArr(arr);
        DelArr(result);
        break;
    }

    case 3: 
    {
        cout << "\nЗавдання 3: Розділення за знаком \n";
        int size = 10;
        int staticArr[] = { -4, -5, 0, 9, -3, 1, -8, 2, 0, -7 };

        cout << "Статичний масив: ";
        PrintArr(staticArr, size);

        int* positives = nullptr, * negatives = nullptr, * zeros = nullptr;
        int posSize = 0, negSize = 0, zeroSize = 0;

        SplitBySign(staticArr, size, positives, posSize, negatives, negSize, zeros, zeroSize);

        cout << "Додатні: ";
        PrintArr(positives, posSize);

        cout << "Від'ємні: ";
        PrintArr(negatives, negSize);

        cout << "Нулі: ";
        PrintArr(zeros, zeroSize);

        DelArr(positives);
        DelArr(negatives);
        DelArr(zeros);
        break;
    }

    default:
        cout << "Невірний вибір! Введіть 1, 2 або 3.\n";
        break;
    }

    return 0;
}

