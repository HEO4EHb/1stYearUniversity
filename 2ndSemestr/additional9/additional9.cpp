//1.Получение размера 2.Добавление элемента в конец 3.Добавление элемента по индексу
//4.Получение элемента по индексу 5.Поиска минимума в массиве

#include <iostream>
#include "vec.hpp"

int main()
{
    int n, a;
    std::cin >> n;
    vec::Vector mas(n);
    mas.Size();
    for (int i = 0; i < n; i++)
    {
        std::cin >> a;
        mas.add(a);
    }
    mas.insert(2, 2);
    std::cout << "Elem 2: " << mas.Elem(2) << std::endl;
    std::cout << "Size " << mas.Size()-1 << std::endl;
    std::cout << "Minimum " << mas.minelem() << std::endl;
}