#ifndef FRUITS_H
#define FRUITS_H

class Fruit
{
	protected:
		std::string m_name;
		const std::string m_color;
	public:
		Fruit(std::string name, std::string color);
		std::string getColor() const;
};

class Apple:public Fruit
{
	public:
		Apple(std::string color);
		std::string getName() const;
};

class Banana:public Fruit
{
	public:
		Banana();
		std::string getName() const;
};

class GrannySmith: public Apple
{
	public:
		GrannySmith();
		std::string getName() const;
};
#endif
