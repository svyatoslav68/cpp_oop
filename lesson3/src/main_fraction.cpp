#include <iostream>
#include "fraction.h"

int main(int argc, char **argv)
{
	std::cout << "Input first Fraction: ";
	int dividend, division;
	//std::cin >> dividend >> division;
	Fraction f1(0,1);
	std::cin >> f1;
	std::cout << "Input second Fraction: ";
	Fraction f2(0,1);
	std::cin >> f2;
	//Fraction f(dividend, division);
	//Fraction operand(4,5);
	Fraction f = f1 + f2;
	std::cout << "f1 + f2 = " << f << std::endl;
	//std::cout << "f1 + f2 = " << (f1 + f2) << std::endl;
	f = f1 -f2;
	std::cout << "f1 - f2 = " << f << std::endl;
	f = f1 * f2;
	std::cout << "f1 * f2 = " << f << std::endl;
	f = f1/f2;
	std::cout << "f1 / f2 = " << f << std::endl;
	if (f1 == f2)
		std::cout << f1 << " = " << f2  << std::endl;
	if (f1 != f2)
		std::cout << f1 << " != " << f2  << std::endl;
	if (f1 > f2)
		std::cout << f1 << " > " << f2  << std::endl;
	if (f1 < f2)
		std::cout << f1 << " < " << f2  << std::endl;
	if (f1 >= f2)
		std::cout << f1 << " >= " << f2  << std::endl;
	if (f1 <= f2)
		std::cout << f1 << " <= " << f2  << std::endl;
}

