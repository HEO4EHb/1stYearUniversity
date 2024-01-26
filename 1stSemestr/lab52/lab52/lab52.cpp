// lab52.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <windows.h>
using namespace std;
int main()
//Задачу 2 можно решить как через массив char, так и через std::string.
//2.	Дан файл, содержащий русский текст, размер текста не превышает 10 К байт
//Найти в тексте N (N ≤ 100) самых коротких слов, содержащих две заданные буквы. 
//Записать найденные слова в текстовый файл в порядке не убывания длины.  
//Все найденные слова должны быть разными. Число N вводить из файла.
{ 
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    std::ifstream n("input.txt");
    std::ifstream in("inputtext.txt");
    std::ofstream out("output.txt");
    std::ifstream input("inputletter.txt");
     char x;
    char y;
    //std::cout << "Введите первую заданную букву" << std::endl;
    input >> x;
    std::cout << x << std::endl;
    //std::cout << "Введите вторую заданную букву" << std::endl;
    input >> y;
    std::cout << y << std::endl;
    
    //std::cout << x << " " << y << std::endl;
    int N = 0;
    n >> N;
    char mass[1000];
    //std::cout << N << std::endl;
   
    char s[100];
    while (!in.eof())
    {
        in >> s;
        for (int i = 0; i < strlen(s); i++)
            if (s[i] == x && s[i] == y)
                 mass[i] = s[i];

        //std::cout << "<" << s << ">" << std::endl;
    }
    out << mass;
    
    
    /*while (!in.eof())
    {
        in >> s;
        if (s.find(x) == 1 && (s.find(y) == 1))
        {            
            std::cout << s << std::endl;
        }            
    }
    /*while (!in.eof())
    {
        in >> s;
        if (s==x&&s==y)
            std::cout << s << std::endl;
    }*/
    
    /*std::string s;
    while (!in.eof())
    {
        in >> s;
        std::cout << s << std::endl;
        //std::cout << s.find('а') << std::endl;        
    }*/

}

