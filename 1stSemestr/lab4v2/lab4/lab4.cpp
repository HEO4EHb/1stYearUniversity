#include<iostream>
#include<fstream>
#include <sstream>
#include<stdlib.h>
#include <stdio.h>  
#include<time.h>
#include <algorithm> 
#define N 10000 
void swap(int* a, int* b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
//1.	Дана последовательность натуральных чисел {aj}j=1...n (n<=10000). 
//Если в последовательности есть два одинаковых числа, упорядочить 
//последовательность по невозрастанию последней цифры числа.
using namespace std;
int main()
{
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");
    std::ofstream outchanged("outputchanged.txt");
    srand(time(0));
    int a[N], last[N], i, j;// last1 = 0, last2 = 0;
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 100 + 1;
        out << a[i] << '\t';
        last[i] = a[i] % 10;
    }
    for (i = 0; i < N - 1; i++)
        for (j = i + 1; j < N; j++)
        {
            if (a[i] == a[j] && last[i] < last[j])
            {
                swap(a[i], a[j]);
                swap(last[i], last[j]);
            }
        }
    for (i = 0; i < N; i++)
    {
        outchanged << a[i] << '\t';
    }
    return 0;
}
