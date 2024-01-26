

#include<iostream>
#include<stdlib.h>
//#include<time.h>
#include <fstream>
#include <sstream>
#include <windows.h>
#include "somefunctions.hpp"
#define N 3
//При выполнении лабораторной работы используйте процедуры и функции:
//1.	Функция чтения
//2.	Функция обработки (может быть несколько)
//3.	Функция записи
//Их необходимо расположить в отдельных файлах (*.hpp и *.cpp) в отдельном пространстве имен.
//Дана целочисленная матрица {Aij}i=1...n;j=1..n , n<=100.
//Если в матрице есть строка, содержащая хотя бы одно простое число,
//и имеющая нулевую сумму элементов
//упорядочить столбцы матрицы по невозрастанию нормы.
using namespace std;
int main()
{
    bool fl = false;
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);         // Установка кодировки для вывода в консоль
    
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");
    double square=0;
    double norm[N];
    int sum[N];
    int n = 0;
    for (int i = 0; i < 10; ++i)
    {
        sum[i] = 0;
    }
    //srand(time(0));
    int a[N][N], i, j;
    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            in >> a[i][j];            
            sum[i] += a[i][j];
        }              
    }
    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < N; ++j)
        {            
            cout << a[j][i] << '\t';            
        }
        cout << '\n';
    }
    for (i = 0; i < N; ++i)
        std::cout << "<" << sum[i] << ">" << '\t';        
    cout << endl;
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
        {
            if (isPrime(a[i][j]) == 1 && sum[i] == 0)
            {
                cout << "<" << isPrime(a[i][j]) << ">" << '\t';
                fl = true;
            }
        }
    cout << endl;
    
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {            
            square += a[i][j] * a[i][j];            
        }
        norm[i] = sqrt(square);
        square = 0;
        cout << norm[i] << '\t';
    }
    cout << endl;
    if (fl)
    {
        for (i = 0; i < N - 1; i++)
        {
            for (j = i + 1; j < N; j++)
            {
                if (norm[i] <= norm[j])
                {
                    swap(a[i], a[j]);
                    swap(norm[i], norm[j]);
                }
            }            
        }
    }    
    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            cout << a[j][i] << '\t';
            
        }             
        cout << '\n';
    }
    for (i = 0; i < N; ++i)
    {
        cout << norm[i] << '\t';
    }
    cout << '\n';
    isPrime(3);
    cout << "<" << isPrime(3) << ">" ;
}
            
            


