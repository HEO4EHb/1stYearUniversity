

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{ //1.	Дана строка длиной не более 100 символов. Сделать все согласные буквы в ней заглавными.
    
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");
    std::string s;
    std::string vowel = "аиеёоуыэюя";
    while (!in.eof())
    {
        
        std::getline(in, s);
            for (int i = 0; i < s.size(); i++)
            {
                if (vowel.find(s[i]) != -1)
                    s[i] = std::toupper(s[i]);
        }
    }
    out << s;
}
/*int vowel[7] = {'а','и', 'е', 'о', 'у', 'ы'};
int symbols[256];
for (int i = 0; i < 256; i++)
    symbols[i] = 0;

    string c;
while (in >> c)
{
    // Заглавная буква
    if (c >= 224 && c <= 255 && std::find));
        c -= 32;
        symbols[c]++;
        out << c << " ";
        std::cout << c << " " << (int)c << std::endl;
*/
//НЕ РАБОЧИЕ ВЕРСИИ ПОЧЕМУ ТО
/*#include <iostream>
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
                        out << s << std::endl;
                    else
                        s[i] = std::toupper(s[i]);
        out << s << std::endl;


    }
}*/
