// lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//varik 2

#include <iostream>
//Ввести натуральные числа A, B и C. 
//Если A кратно C и B кратно C, то вывести (A+B)/C, если A кратно C и B не кратно C, то вывести A/С+B, в остальных случаях вывести A-B-C.
int main()
{
    setlocale(LC_ALL, "Rus");
    /*
    int a, b, c;
    std::cout << "Введите натуральные a,b,c" << std::endl;
    std::cin >> a >> b >> c;
    if (a, b, c > 0)
    {
        if (a % c == 0)
        {
            if (b % c == 0)
            {
                std::cout << (a + b) / c << std::endl;
            }
            else
                std::cout << a/c+b << std::endl;
        }
        else
            std::cout << a - b - c << std::endl;
    }
    else
        std::cout << "Введите натуральные числа" << std::endl;*/
    //Ввести натуральное число N, обозначающее номер дня недели. 
    //Используя оператор switch вывести название всех дней недели. Предусмотреть обработку ошибочного ввода N.
    int x;
    std::cout << "Введите день недели от 1 до 7" << std::endl;
    std::cin >> x;
    switch (x)
    {
    case 1: std::cout << "Понедельник" <<std:: endl;
        break;
    case 2: std::cout << "Вторник" << std::endl;
        break;
    case 3: std::cout << "Среда" << std::endl;
        break;
    case 4: std::cout << "Четверг" << std::endl;
        break;
    case 5: std::cout << "Пятница" << std::endl;
        break;
    case 6: std::cout << "Суббота" << std::endl;
        break;
    case 7: std::cout << "Воскресенье" << std::endl;
        break;
    default:
        std::cout << "Такового дня недели нет!" << std::endl;


    }


}


