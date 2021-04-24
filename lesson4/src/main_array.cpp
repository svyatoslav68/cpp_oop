#include <iostream>
#include <sstream>
#include <random>
#include <string>
#include <algorithm>
#include <random>

#include "randomint.h"
#include "arrayint.h"

const int length_vector = 100;
const int length_array = 30;
int main(int argc, char **argv)
{
	/* Из параметра командной строки берется целое число, которое будет задавать 
	 * начальные установки для генератора случайных чисел */
	int seed;
	if (argc == 2) {
		std::stringstream ss;
		ss << argv[1];
		ss >> seed;
	}
	std::cout << "seed = " << seed << std::endl;
	//std::cout << "Random values: ";
	std::default_random_engine dre(seed);
	std::uniform_int_distribution<int> di(0, 49);
	di(dre);
	/* Выполнение задачи №2 домашнего задания. 
	 * Будет создан вектор целых чисел, заполнен случайными числами.
	 * Для определения количества различных элементов, отсортируем
	 * вектор, затем удалим одинаковые, используя алгоритм из STL и
	 * измерим полученную длину. Разность и будет количеством 
	 * повторяющихся элементов. */
	std::cout << "Task N 2. Calculate numbers unique elements.\n";
	std::vector<int> array_int;
	for (int i =0; i < length_vector; ++i) {
		array_int.push_back(di(dre));
	}
	std::sort(array_int.begin(), array_int.end());
	for (auto v:array_int)
		std::cout << ":" << v;
	std::cout << std::endl;
	std::cout << "Numbers of unique elements: " << length_vector - (array_int.end() - std::unique(array_int.begin(), array_int.end())) << std::endl;
	/***************************************************************/
	std::cout << "Task N1. Source array of " << length_array<< " elements:\n";
	ArrayInt myArray(length_array);
	for (int i = 0; i < length_array; ++i){
		myArray[i] = di(dre);
	}
	myArray.display();
	std::cout << "Last element = " << myArray.pop_back() << std::endl;
	std::cout << "First element = " << myArray.pop_front() << std::endl;
	std::cout << "Result array: \n";
	myArray.display();
	myArray.sort();
	std::cout << "Sorted array: \n";
	myArray.display();
}

