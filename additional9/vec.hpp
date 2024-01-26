#pragma once

namespace vec
{
    class Vector
    {
    public:
        Vector(int n);
        ~Vector();
        int Size();
        void add(int num);
        int Elem(int i);
        void insert(int it, int num);
        int minelem();
    private:
        void newvec();
        int* m_vec;
        int m_n, m_size;

    };
}