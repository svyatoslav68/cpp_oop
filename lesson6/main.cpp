#include <iostream>

int main(int argc, char **argv)
{
	int number =0;
	while (true) {
		std::cout << "Input integer value: ";
		std::cin >> number;
		if (std::cin.good()) {
			std::cin.ignore(10, '\n');
			break;
		}
		std::cin.clear();
		std::cout << "Wrong input value\n";
		std::cin.ignore(10, '\n');
	}
	std::cout << "Inputted value = " << number << std::endl; 
}
