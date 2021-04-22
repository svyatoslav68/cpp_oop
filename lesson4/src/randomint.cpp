#include <limits>
#include <random>
#include "randomint.h"

RandomInt::RandomInt():m_minRange(0), m_maxRange(std::numeric_limits<int>::max())
{
}

RandomInt::RandomInt(int maxRange, int minRange):m_minRange(minRange), m_maxRange(maxRange)
{
}

RandomInt::RandomInt(int maxRange, int minRange, int seed):m_minRange(minRange), m_maxRange(maxRange) 
{
	dre.seed(seed);
	getNextValue();
}

int RandomInt::getNextValue()
{
	std::uniform_int_distribution<int> di(m_minRange, m_maxRange);
	return di(dre);
}

