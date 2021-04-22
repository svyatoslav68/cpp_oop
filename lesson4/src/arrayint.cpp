#include <limits>
#include <iostream>
#include "arrayint.h"

void ArrayInt::erase()
{
	delete[] m_data;
	// Здесь нам нужно указать m_data значение nullptr, чтобы на выходе не было висячего указателя
	m_data = nullptr;
	m_length = 0;
}

int ArrayInt::getLength()
{
	return m_length; 
}

int& ArrayInt::operator[](int index)
{
	assert(index >= 0 && index < m_length);
	return m_data[index];
}

int ArrayInt::pop_back()
{
	if (m_length > 0){
		int result = *(m_data + m_length - 1);
		if (--m_length == 0)
			m_data = nullptr;
		return result;
	}
	else {
		std::cout << "Vector is empty!\n";
		return std::numeric_limits<int>::min();
	}
}

int ArrayInt::pop_front()
{
	if (m_length > 0){
		int result = *m_data;
		if (--m_length == 0)
			m_data = nullptr;
		else {
			/* Здесь я хотел бы выделить память под новый массив
			 * на единицу меньше существующего, а потом переместить 
			 * туда содержимое старого массива 
			int *old_array = m_data;
			delete [] m_data;
			m_data = new int(m_length);*/
			m_data = m_data + 1;
		}
		return result;
	}
	else {
		std::cout << "Vector is empty!\n";
		return std::numeric_limits<int>::min();
	}
}

void ArrayInt::swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int ArrayInt::sort()//int *array, const int size)
/* Пузырьковая сортировка. Функция взята из домашки по курсу алгоритмов на C */
{
	//printSimpleArray(array, size);
	for (int i = 0; i < m_length; ++i) {
		for (int j = 0; j < m_length-i-1; ++j)
			if(*(m_data+j) > *(m_data+j+1))
				swap(m_data+j, m_data+j+1);
	}
	return 0;
}

size_t ArrayInt::display()
{
	for (int i = 0; i < m_length; ++i){
		std::cout << " " << m_data[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "All elements: " << m_length << std::endl;
	return m_length;
}
