#ifndef FRUITS_H
#define FRUITS_H

class Fruit
{
	protected:
		std::string m_name;
		std::string m_color;
	public:
		std::string getColor();
};

class Apple:public Fruit
{
	public:
		Apple(std::string color);
		void getName();
};

class Banana:public Fruit
{
	public:
		Banana();
		void getName();
};

class GrannySmith: public Apple
{
	public:
		GrannySmith();
		void getName();
};
#endif
