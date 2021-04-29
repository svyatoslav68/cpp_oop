#include <iostream>
#include <iomanip>

namespace std {
	/* Объявляю функцию-манипулятор внутри namespace std
	 * чтобы можно было пользоваться также, как и endl */
	ostream &endll(ostream &s)
	{
		/* Второй перевод строки делаю с помощью endl, для того
		 * чтобы не изменилась логика работы. Я слышал, что endl
		 * делает что-то еще, кроме перевода строки */
		return s << '\n' << endl;
	}
}

int main(int argc, char **argv)
{
	/* Как обработать ошибку ввода вида "1jkldld2" не придумал, 
	 * такая ошибка не обрабатывается */
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
	std::cout << "Inputted value = " << number << std::endll; 
	std::cout << "String for proba endll" << std::endl;
}
