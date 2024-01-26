#include "vec.hpp"
#include <iostream>

namespace vec
{
    Vector::Vector(int n)
    {
        m_size = 0;
        m_n = n;
        m_vec = new int[m_n];
    }
    Vector::~Vector()
    {
        delete[] m_vec;
    }
    int Vector::Size() { return m_size; }
    int Vector::Elem(int i) { return m_vec[i]; }
    void Vector::add(int num)
    {
        m_vec[m_size] = num;
        //std::cout << m_vec[m_size] << std::endl;
        m_size++;
    }
    void Vector::newvec()
    {
        int* new_vec = new int[m_size + 1];
        for (int i = 0; i < m_size + 1; i++)
        {
            new_vec[i] = m_vec[i];
        }
        delete[] m_vec;
        m_vec = new_vec;
    }
    void Vector::insert(int it, int num)
    {
        newvec();
        for (int j = m_size; j > it; j--)
        {
            m_vec[j + 1] = m_vec[j];
        }
        m_vec[it] = num;
        m_size++;
    }
    int Vector::minelem()
    {
        int min_m = INT_MAX;
        for (int i = 0; i < m_size; i++)
        {
            if (m_vec[i] < min_m)
                min_m = m_vec[i];
        }
        return min_m;
    }
}