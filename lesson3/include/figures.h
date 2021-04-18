#ifndef FIGURES_H
#define FIGURES_H

class Figure
{
	public:
	//static const double pi;
	Figure();
	virtual ~Figure() {};
	virtual void draw() = 0;
	virtual double area() = 0;
	virtual void print_members() = 0;
};

class Parallelogram:public Figure
{
	public:
		Parallelogram();
		Parallelogram(double a, double b, double sharp_angle);
		virtual ~Parallelogram() override {};
		virtual double area() override;
		void print_members() override;
		virtual void draw();
	protected:
		const double m_a = 0;
		const double m_b = 0;
		const double m_sharp = 0; // Острый угол
};

class Rectangle:public Parallelogram
{
	public:
		Rectangle(double a, double b);
};

class Square:public Parallelogram
{
	public:
		Square(double a);	
};

class Rhombus:public Parallelogram
{
	public:
	Rhombus(double a, double angle);
};

class Circle:public Figure
{
	public:
		Circle() {};
		Circle(double radius);
		~Circle() override {};
		double area() override;
		void print_members();
		virtual void draw() {};
	private:
		double m_radius;
};

#endif // FIGURES_H
