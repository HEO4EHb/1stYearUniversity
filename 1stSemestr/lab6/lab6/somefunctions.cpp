#include <math.h>
#define N 10
#include "somefunctions.hpp"

//определение простоты числа
bool isPrime(int x)
{
    //тело
    if (x < 2)
        return false;
    for (int d = 2; d <= sqrt(x); d++)
        if (x % d == 0)
            return false;
    return true;
}
// обмен двух переменных
void swap(int& a, int& b)//ставим & чтобы переменные которые загурзились в СВАП не забыли потом выгрузиться в МЭЙН
{
    int tmp = a;
    a = b;
    b = tmp;
}
// сортировка
void sort(int n, int mas[N])
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (mas[i] < mas[j])
                swap(mas[i], mas[j]);
}
// Поиск суммы цифр числа
int sumdigit(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return true;
}

