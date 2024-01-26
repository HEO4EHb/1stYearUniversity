#include<fstream>
#include <iostream>
#include <sstream>
#include<stdlib.h>
#include <stdio.h>  
#include<time.h>
#include <algorithm> 
#define N 10 
std::ifstream in("input.txt");
std::ofstream out("output.txt");
std::ofstream outchanged("outputchanged.txt");
//Найти столбец с наименьшей суммой элементов и увеличить все элементы этого столбца на 3
using namespace std;
int main()
{
	int summin = INT_MAX;
	int sum[N], l, m;
	int n = 0;
	for (int i = 0; i < 10; ++i)
	{
		sum[i] = 0;
	}
	srand(time(0));
	cin >> l >> m;
	int** a = new int* [l];
	for (int i = 0; i < l; i++)
		a[i] = new int[m];
	int  i, j;
	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < N; ++j)
		{
			a[i][j] = rand() % 100 + 1;
			cout << a[i][j] << '\t';
			sum[i] += a[i][j];

		}
		cout << '\n';
	}
	for (i = 0; i < N; ++i)
		cout << "<" << sum[i] << ">" << '\t';
	for (i = 0; i < N; i++)
		if (sum[i] < summin)
		{
			summin = sum[i];
			n = i;
			cout << n << std::endl;
		}

	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < N; ++j)
		{
			if (j == n)
			{
				a[i][j] = a[i][j] + 3;
				cout << a[i][j] << '\t';
			}
			else
				cout << a[i][j] << '\t';
		}
		cout << '\n';
	}
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
}