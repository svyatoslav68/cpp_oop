#include <iostream>
#include "classes.h"

template <typename T>
T div(T division, T dividend)
{
	if (dividend == 0.0)
		throw DivisionByZero<T>(0.0);
	return division/dividend;
}

int main(int argc, char **argv)
{
	double division, dividend;
	std::cout << "Input two number:";
	std::cin >> division;
	std::cin >> dividend;
	try{
		double result = div(division, dividend);	
		std::cout << division << "/" << dividend << " = " << result << std::endl;
	}
	catch (DivisionByZero<double> &e){
		e.outMessage();
	}
	Bar bar;
	int n = -1;
	while (n != 0) {
		try {
			std::cout << "Input integer number:";
			std::cin >> n;
			bar.set(n);
			std::cout << bar << std::endl;
		}
		catch (Ex &e) {
			e.outMessage();
			std::cout << bar << std::endl;
		}
	}
}

