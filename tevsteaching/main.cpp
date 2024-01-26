#include <iostream>
// struct - статическая структура данных
struct Elem{
    Elem* prev = nullptr;
    Elem* next = nullptr;
    int data;
};

struct People{
    std::string Name;
    int age;
    People() {}

    People(std::string name,int Age)
    {
        age = Age;
        Name = name;
    }
};

class Person{
private:
    std::string m_name;
    int m_age;
public:
    bool isYan=false;
    Person(std::string Name,int Age)
    {
        m_name = Name;
        m_age = Age;
    }
    void print()
    {
        std::cout<<m_name<<" "<<m_age<<" "<<isYan<<std::endl;
    }
};




void add(Elem* prev,int data)
{
    while(prev->next!=nullptr)
        prev = prev->next;
    Elem* v = new Elem;
    v->prev = prev;
    v->next = nullptr;
    v->data = data;
    prev->next = v;
}
void pass(Elem* v)
{
    while(v->next!= nullptr)
    {
        v=v->next;
        std::cout<<v->data<<std::endl;
    }
}

int main() {
    Person Alice("Alice",33);
    Alice.print();
    std::cout<<"!Tarachkov is cool nigga"<<std::endl;
    People Bob;
    Bob.Name="Bob";
    Bob.age = 10;
    People Tom("Tom",20);

    Elem* head = new Elem;
    add(head,10);
    add(head,12);
    add(head,21);
    add(head,-99);
    pass(head);

    /**int*d;//8 байт занимает если операционная система 64 разрядная
    // 1 int занимает 4 байта
    d=new int[3];
    int * mass = nullptr;*/

    return 0;
}
