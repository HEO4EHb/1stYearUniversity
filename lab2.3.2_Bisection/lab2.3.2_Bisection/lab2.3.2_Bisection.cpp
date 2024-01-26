// lab2.3.2_Bisection.cpp 
//Найдите корень уравнения sin (2*x + 3) = 0 
//на отрезке [0;1] с точностью до 10^-4 с помощью бисекции.


#include <iostream>
#include <cmath>
double f(double x)// это ваще пушка если я вызываю функцию f от любого x или а оно записывает его в функцию
{
    return sin(2 * x + 3);// эта штука работает как обычная функция 
}
 double Bisetion(double a, double b, double eps)
{       
    a = 0;
    b = 1;    
    while (true)
    {
        double  x = (a + b) / 2;
        if (abs(x-a)<eps && abs(x - b) < eps)// ||-ИЛИ
            return x;
        else if (f(x) * f(a) > 0)
            a = x;
        else
            b = x;
    }

}

int main()
{
    std::cout << Bisetion(0, 1, 1e-14);
}


