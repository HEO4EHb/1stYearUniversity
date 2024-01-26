

#include <iostream>
using namespace std;
class Matrix
{
public:
    // Конструктор матрицы
    Matrix(int n,int m)
    {
        std::cout << "Constructor" << endl;
        m_n = n;
        m_m = m;
        m_mat = new int* [m_n];
        for (int i = 0; i < m_n; i++)
            m_mat[i] = new int[m_m];
    }
    //Правило трёх C++
    // Если класс или структура определяет один из следующих методов,
    // Деструктор
    //Конструктор копирования
    //Оператор присваивания копированием
    // то они должны явным образом определить все три метода

    //Конструктор копирования
    Matrix(const Matrix& mat)
    {
        m_n = mat.m_n;
        m_m = mat.m_m;

        m_mat = new int* [m_n];
        for (int i = 0; i < m_n; i++)
            m_mat[i] = new int[m_m];
        for (int i = 0; i < m_n; i++)
            for (int j = 0; j < m_m; j++)
                m_mat[i][j] = mat.m_mat[i][j];        
    }
    
    //Оператор присваивания копированием
    Matrix& operator=(const Matrix& mat)
    {
        cout << "Operator =" << endl;
        m_n = mat.m_n;
        m_m = mat.m_m;

        for (int i = 0; i < m_n; i++)
            for (int j = 0; j < m_m; j++)
                m_mat[i][j] = mat.m_mat[i][j];
        return *this;
        //*this содержит указатель на текущий объект класса
    }
    //Оператор сложения
    Matrix operator+(const Matrix& mat)
    {
        cout << "Operator +" << endl;
        Matrix tmp(2, 3);
        for (int i = 0; i < m_n; i++)
            for (int j = 0; j < m_m; j++)
                tmp.m_mat[i][j] = m_mat[i][j] + mat.m_mat[i][j];
        return tmp;
    }
    //Оператор умножения
    Matrix operatormultiplier(const Matrix& mat)
    {
        cout << "Operator *" << endl;
        Matrix tmp(2, 3);
        for (int i = 0; i < m_n; i++)
            for (int j = 0; j < m_m; j++)
                tmp.m_mat[i][j] = m_mat[i][j] * mat.m_mat[i][j];
        return tmp;
    }
    //Деструктор нужен чтобы удалять динмаические массивы
    //Чтобы не было утечки памяти
    ~Matrix()//пишем через знак ~(тильда) он использует для деструкторов в вижаке
    {
        cout << "Destuctor" << endl;
        for (int i = 0; i < m_n; i++)
            delete[] m_mat[i];
        delete m_mat;
    }
    // с помощью friend можно обращаться к private
    friend istream& operator>>(istream& in, Matrix& mat);
    friend ostream& operator<<(ostream& out, Matrix& mat);
private:
    int m_n,m_m;// поле класса
    int** m_mat;// динамический массив потому что мы не знаем каких размеров будет матрица
};
// перегрузка оператора ввоода
// перегрузыка - это расширение оператора добавление новой функции
istream& operator>>(istream& in, Matrix& mat)
//& ссылка на istream и принимает на вход ссыллку на матрицу
{
    for (int i=0; i<mat.m_n;i++)
        for(int j=0;j<mat.m_m;j++)
            in >> mat.m_mat[i][j];    
    return in;
}
// перегрузыка оператора вывода
ostream& operator<<(ostream& out, Matrix& mat)
{
    out << "Matrix" << mat.m_n << "x" << mat.m_m << endl;
    for (int i = 0; i < mat.m_n; i++)
    {
        for (int j = 0; j < mat.m_m; j++)
            out << mat.m_mat[i][j] << " ";
        out << endl;
    }
    return out;
}

int main()
{
    Matrix A(2, 3);
    cin >> A;
    cout << A << endl;

    Matrix B(2, 3);
    cin >> B;
    cout << B << endl;

    Matrix C(2, 3);
    C = A + B;
    cout << C << endl;
}

