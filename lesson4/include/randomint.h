#ifndef RANDOMINT_H
#define RANDOMINT_H

/* Класс используется для генерации целых случайных чисел
 * используется функциональность C++ 11.
 */
 
class RandomInt{
	public:
		RandomInt();
		RandomInt(int maxRange, int minRange = 0);
		RandomInt(int maxRange, int minRange, int seed);
		int getNextValue();
	private:
		int m_minRange; // Минимальное значение
		int m_maxRange; // Максимальное значение
		std::default_random_engine dre;
		int currentValue;
};
#endif //RANDOMINT_H
