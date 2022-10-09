/* Написать функцию, которая принимает на вход матрицу A размерности N * M
и преобразует ее в новую матрицу B, заменяя все положительные элементы значением 1, 
а остальные - 0. Также функция должна выдать сумму s всех элементов матрицы B. 
Кроме того, если сумма s0 всех элементов матрицы A меньше чем 2*s, 
то программа выдает значение булевой переменной flag=1, иначе - flag=0. 
Продемонстрировать работу этой функции на конкретных примерах.*/

#include <iostream>
#include "Func_transform.h"
using namespace std;

int Func_transform(int N, int M, int** A, int** B, int s, int s0);
int main()
{
    int N, M, s0 = 0, s = 0; // размерность матрицы, s0 - сумма элементов матрицы А, s - сумма элементов матрицы В
    cout << "N = "; cin >> N; 
    cout << endl;
    cout << "M = "; cin >> M; // ввод с клавиатуры

    // Обьявление начальной матрицы А
    int** A = new int* [N];
    for (int i = 0; i < N; i++) {
        A[i] = new int[M];
    }

    // Обьявление конечной матрицы В, такой же размерности что и матрица А
    int** B = new int* [N];
    for (int i = 0; i < N; i++) {
        B[i] = new int[M];
    }

    // Заполнение матрицы А с клавиатуры
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    // Вывод матрицы А
    cout << endl << "Matrix A:";
    for (int i = 0; i < N; i++) {
        cout << endl;
        for (int j = 0; j < M; j++) {
            cout << "A[" << A[i][j] << "] ";
        }
    }

    cout << endl << Func_transform(N, M, A, B, s, s0);

    // Вывод матрицы В
    cout << endl << "Matrix B:";
    for (int i = 0; i < N; i++) {
        cout << endl;
        for (int j = 0; j < M; j++) {
            cout << "B[" << B[i][j] << "] ";
        }
    }

    // Очистка памяти от занимаемых матриц А и В
    for (int i = 0; i < N; i++) {
        delete[] A[i];
    }
    delete[] A;

    for (int i = 0; i < N; i++) {
        delete[] B[i];
    }
    delete[] B;
    return 0;
}

/*
Отладка №1:
3
3
1 2 3 -4 -5 -6 7 8 9

Отладка №2:
3
3
0 -2 -3 -4 5 6 -7 -8 -9
*/
