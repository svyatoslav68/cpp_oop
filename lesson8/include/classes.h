#pragma once
#include <iostream>

template<typename T>
class DivisionByZero
{
public:
	//template<typename T>
	DivisionByZero(T dividend):m_dividend(dividend) {}
	void outMessage() {std::cout <<  "Exception!!! dividend = " << m_dividend << std::endl;}
private:
	T m_dividend;
};

class Ex
{
public:
	Ex(double x):m_x(x) {}
	void outMessage();
private:
	double m_x;
};

class Bar
{
public:
	Bar():m_y(0.0) {}
	void set(double a);
	friend std::ostream &operator<<(std::ostream &os, Bar &bar);
private:
	double m_y;
};

