#include <iostream>
#include <string>
#include "fruits.h"

Fruit::Fruit(std::string name, std::string color):m_name(name), m_color(color)
{
}

std::string Fruit::getColor() const
{
	return m_color;
}

Apple::Apple(std::string color):Fruit(std::string("apple"), color)
{
}

std::string Apple::getName() const
{
	return m_name;
}

Banana::Banana():Fruit(std::string("banana"), std::string("yellow"))
{
}

std::string Banana::getName() const
{
	return m_name;
}

GrannySmith::GrannySmith():Apple(std::string("green"))
{
	m_name = std::string("Granny Smith apple");
}

std::string GrannySmith::getName() const
{
	return m_name;
}
