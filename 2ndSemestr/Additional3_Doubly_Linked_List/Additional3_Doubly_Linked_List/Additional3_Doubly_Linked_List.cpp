// Additional3_Doubly_Linked_List.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#define M 1000;
#define N 10;

struct T_List
{
    T_List* next;
    T_List* prev;
    int field;
};
struct T_List* init()
{
    struct T_List* root;// выделяем память под первый элемент то есть под корень
    root = (struct T_List*)malloc(sizeof(struct T_List));
    root->next = root;// следующий элемент корень
    root->prev = root;// предыдущий тоже получается корень
    return(root);
}

struct T_List* add(T_List* root, int number)
{
    T_List *tmp, *p;
    tmp = (struct T_List*)malloc(sizeof(T_List));
    p = root->next;
    root->next = tmp;
    tmp->field = number;
    tmp->next = p;
    tmp->prev = root;
    p->prev = tmp;
    return(tmp);
}
struct T_List* deleteelem(T_List* root)
{
    struct T_List  *prev,  *next;
    prev = root->prev;
    next = root->next;
    prev->next = root->next;
    next->prev = root->prev;
    free(root);// новая функция наверное по старому будет root=nullptr
    return(prev);
}
void listprint(T_List* root)
{
    struct T_List* p;
    p = root;
    do {
        printf("%d ", p->field); // вывод значения элемента p
        p = p->next; // переход к следующему узлу
    } while (p != root); // условие окончания обхода
}
void listprintr(T_List* root)
{
    struct T_List* p;
    p = root;
    do {
        p = p->prev;  // переход к предыдущему узлу
        printf("%d ", p->field); // вывод значения элемента p
    } while (p != root); // условие окончания обхода
}
void PRINT(T_List* root)
{
    T_List* p = root->next;
    while (p != root)
    {
        std::cout << p->field << std::endl;
        p = p->next;
    }
}

int main()
{
    T_List* root = init();
    for (int i = 0; i < N i++)
    {
        add(root, rand() % 10000);
    }
    PRINT(root);

    return 0;

    listprint(root);
    cout << endl;
      
    /*int arr[N];
    int max = 0;
    int maxnum = 0;
    for (int i = 0; i < N i++)
        arr[i] = rand() % 10000;
    
    for (int j = 0; j < M j++)
    {
        for (int i = 0; i < N i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
                maxnum = i;
            }
        }
        //delete arr[maxnum]; 
        arr[maxnum] = 0;
    }*/
    //
    //Всё время O(n logn)
    
}


