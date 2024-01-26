#include<iostream>
#include<fstream>
#include <sstream>
#include<stdlib.h>
#include <stdio.h>  
#include<time.h>
#include <algorithm> 
#define N 10 
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
    int a[N],  i, last1=0,last2=0;   
     for (i=0;i<N-1;i++)
        for (int j = i+1; j < N; j++)
        {
            a[j] = rand() % 100 + 1;
            out << a[j] << '\t';
            if (a[i] == a[j])
            {
                last1 = a[i] % 10;
                last2 = a[j] % 10;
                if (last1<last2)
                {
                    swap(a[i], a[j]);
                }
            }
            outchanged << a[j] << '\t';
        }
    
    
    
    return 0;
}
	