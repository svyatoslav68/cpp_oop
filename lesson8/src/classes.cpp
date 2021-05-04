#include "classes.h"

void Ex::outMessage()
{
	std::cout << "Exception!!! x = " << m_x << ", y + a > 100\n";
}

void Bar::set(double a)
{
	if (m_y + a > 100)
		throw Ex(a*m_y);
	else
		m_y = a;
}

std::ostream &operator<<(std::ostream &os, Bar &bar)
{
	os << "Object Bar: y = " << bar.m_y;
	return os;
}

