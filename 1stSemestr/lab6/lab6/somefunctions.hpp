#pragma once
#include <math.h>
#define N 1000
//определение простоты числа
bool isPrime(int x);

// обмен двух переменных
void swap(int& a, int& b);//ставим & чтобы переменные которые загурзились в СВАП не забыли потом выгрузиться в МЭЙН

// сортировка
void sort(int n, int mas[N]);

// Поиск суммы цифр числа
int sumdigit(int x);


