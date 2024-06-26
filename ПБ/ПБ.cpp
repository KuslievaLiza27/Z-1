﻿// ПБ.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // Инициализируем генератор случайных чисел
    srand(static_cast<unsigned int>(time(nullptr)));

    // Создаем векторы a_mas, b_mas, c_mas
    vector<int> a_mas;
    vector<int> b_mas;
    vector<int> c_mas;

    // Генерируем случайные числа и добавляем их в a_mas
    for (int i = 0; i < 10; ++i) {
        a_mas.push_back(rand() % 100); // Генерация случайного числа от 0 до 99
    }

    // Выводим элементы вектора a_mas
    cout << "Вектор a_mas: ";
    for (int num : a_mas) {
        cout << num << " ";
    }
    cout << endl;

    // Разделяем числа на четные и нечетные
    for (int num : a_mas) {
        if (num % 2 == 0) {
            b_mas.push_back(num); // Добавляем четное число в b_mas
        }
        else {
            c_mas.push_back(num); // Добавляем нечетное число в c_mas
        }
    }

    // Выводим элементы вектора b_mas
    cout << "Вектор b_mas (четные числа): ";
    for (int num : b_mas) {
        cout << num << " ";
    }
    cout << endl;

    // Выводим элементы вектора c_mas
    cout << "Вектор c_mas (нечетные числа): ";
    for (int num : c_mas) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
