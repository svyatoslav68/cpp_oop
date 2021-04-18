#include <iostream>
#include "fraction.h"

Fraction::Fraction(int dividend, int division):m_dividend(abs(dividend)), m_division(abs(division)),m_sign((dividend*division) < 0)
{
	if (!m_division){
		std::cout << "No wright!!!" << std::endl;
		exit(1);
	}
		unsigned int n_gcd = 1;
		if ((n_gcd = gcd(m_dividend, m_division)) > 1) {
			m_dividend /= n_gcd;
			m_division /= n_gcd;
		}
}

Fraction::Fraction(unsigned int dividend, unsigned int division, bool sign):m_dividend(dividend), m_division(division),m_sign(sign)
{
	if (!m_division){
		std::cout << "No wright!!!" << std::endl;
		exit(1);
	}
	unsigned int n_gcd = 1;
	if ((n_gcd = gcd(m_dividend, m_division)) > 1) {
		m_dividend /= n_gcd;
		m_division /= n_gcd;
	}
}

void Fraction::setDividend(const unsigned int value)
{
		m_dividend = value;
}

void Fraction::setDivision(const unsigned int value)
{
	if (!value) {
		std::cout << "No wright!!!" << std::endl;
		exit(1);
	}
	else {
		m_division = value;
	}
}

void Fraction::setSign(const bool sign)
{
	m_sign = sign;
}

void Fraction::display()
{
	std::cout << "Fraction is: " << (m_sign?'-':'\0') << m_dividend << ((m_division !=1)?'/':'\0') << ((m_division !=1)?m_division:'\0') << std::endl;
}

Fraction &Fraction::operator-()
{
	m_sign = !m_sign;
	return *this;
}

Fraction Fraction::operator*(const Fraction &op) const
{
	unsigned int tmp_dividend = m_dividend * op.getDividend();
	unsigned int tmp_division = m_division * op.getDivision();
	bool tmp_sign = m_sign ^ op.getSign();
	return Fraction(tmp_dividend, tmp_division, tmp_sign);
}

Fraction Fraction::operator/(const Fraction &op) const
{
	unsigned int tmp_dividend = m_dividend * op.getDivision();
	unsigned int tmp_division = m_division * op.getDividend();
	bool tmp_sign = m_sign ^ op.getSign();
	return Fraction(tmp_dividend, tmp_division, tmp_sign);
}

Fraction Fraction::operator+(const Fraction &op) const
{
	int tmp_dividend = (m_sign?-1:1) * m_dividend * op.m_division + (op.m_sign?-1:1) * m_division * op.m_dividend;
	unsigned int tmp_division = m_division * op.m_division;
	bool tmp_sign = (tmp_dividend < 0);
	return Fraction(abs(tmp_dividend), tmp_division, tmp_sign);
}

Fraction Fraction::operator-(const Fraction &op) const
{
	Fraction arg(op);
	return *this + (-arg);	
}

bool Fraction::operator==(const Fraction &op) const
{
	bool result;
	result = ((m_dividend == op.m_dividend) && (m_division == op.m_division) && (m_sign == op.m_sign));
	return result;
}

bool Fraction::operator!=(const Fraction &op) const
{
	return !(this->operator==(op));
}

bool Fraction::operator<(const Fraction &op)const
{
	return static_cast<double>(m_dividend)/m_division*(m_sign?-1:1) < static_cast<double>(op.m_dividend)/op.m_division*(op.m_sign?-1:1);
}

bool Fraction::operator>(const Fraction &op) const
{
	return static_cast<double>(m_dividend)/m_division*(m_sign?-1:1) > static_cast<double>(op.m_dividend)/op.m_division*(op.m_sign?-1:1);
}

bool Fraction::operator<=(const Fraction &op) const
{
	return !(this->operator>(op));
}

bool Fraction::operator>=(const Fraction &op) const
{
	return !(this->operator<(op));
}

unsigned int Fraction::gcd(unsigned int a, unsigned int b)
{
	return b == 0? a :gcd(b, a%b);
}

/* Перегрузка оператора вывода в поток 
   Реализуем в виде дружественной функции */

std::ostream &operator<<(std::ostream &s, Fraction &fr)
{
	s << (fr.m_sign?'-':'\0') << fr.m_dividend << ((fr.m_division == 1)?'\0':'/');
	if (fr.m_division != 1)
		s << fr.m_division;
	return s;
}

std::istream &operator>>(std::istream &s, Fraction &fr)
{
	int tmp_dividend = 0;
	unsigned int tmp_division = 1;
	bool tmp_sign = false;
	char dummy;
	s >> tmp_dividend >> dummy >> tmp_division;
	fr.setDividend(abs(tmp_dividend));
	fr.setDivision(tmp_division);
	unsigned int n_gcd = 1;
	if ((n_gcd = fr.gcd(fr.getDividend(), fr.getDivision())) > 1) {
		fr.setDividend(fr.getDividend() / n_gcd);
		fr.setDivision(fr.getDivision() / n_gcd);
	}
	if (tmp_dividend < 0)
		fr.setSign(true);
	return s;
}
