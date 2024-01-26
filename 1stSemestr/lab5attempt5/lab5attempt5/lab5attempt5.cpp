// lab5attempt5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);         // Установка кодировки для вывода в консоль

    std::ifstream in("input.txt");
    std::ofstream out("output.txt");

     char s[100];
    unsigned char vowel[10] = { 'а','и', 'е','ё', 'о', 'у', 'ы','э','ю','я' };
    while (!in.eof())
    {
        in.getline(s, 100);
        for (int i = 0; i < strlen(s); i++)
            if (s[i] >= 'а' && s[i] <= 'я')
                for (int j = 0; j < 10; j++)
                    if (s[i] == vowel[j])                        
                        out << s <<  std::endl;
                    else 
                        s[i] = std::toupper(s[i]);
      out << s << std::endl;
            

    }
}

