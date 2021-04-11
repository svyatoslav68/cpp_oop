#include <iostream>
#include <string>
#include "fruits.h"

std::string Fruit::getColor()
{
	return m_color;
}

Apple::Apple(std::string color):m_name(std::string("apple")), m_color(color)
{
}

Banana::Banana():m_name(std::string("banana")), m_color(std::string("banana"))
{
}

GrannySmith::GrannySmith():Apple("green")
{
}
