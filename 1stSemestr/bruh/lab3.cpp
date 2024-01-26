// lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//var2

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//Считать, что количество чисел N вводится с клавиатуры перед вводом последовательности
//Дана последовательность вещественных чисел {Aj}. 
//Найти сумму чисел, лежащих на отpезке [-7,19], наибольшее из таких чисел и номер этого числа в последовательности.
int main()
{
    int max = INT_MIN;
    setlocale(LC_ALL, "russian");
    int number = 0;
    int n;
    int sum = 0;
    std::cin >> n;
    double a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a >= -7 && a < 20)
        {
            sum = sum + a;
            if (a > max)
            {
                max = a;
                number = number++;

            }
        }                                         
    }
    cout << "номер числа в последовательности =" << number << std::endl;
    cout << "сумма =" << sum << std::endl;
    cout << "наибольшее =" << max << std::endl;


    
        
}

