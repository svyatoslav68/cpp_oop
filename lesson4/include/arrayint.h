#ifndef ARRAYINT_H
#define ARRAYINT_H

#include <cassert> // для assert()

class ArrayInt
{
private:
    int m_length;
    int *m_data;
	void swap(int *a, int *b);
public:
    ArrayInt(): m_length(0), m_data(nullptr)
    { }

    ArrayInt(int length):m_length(length)
    {
        assert(length >= 0);
        if (length > 0)
            m_data = new int[length];
        else
            m_data = nullptr;
    }

    ~ArrayInt()
    {
        delete[] m_data;
    }
	int& operator[](int index);
	int pop_back();
	int pop_front();
	int sort();
	size_t display();
	void erase();
    int getLength();
};

#endif

