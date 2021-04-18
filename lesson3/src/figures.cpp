#include <iostream>
#include <cmath>
#include "figures.h"

//const double Figure::pi = M_PI;

Figure::Figure()
{
}

Parallelogram::Parallelogram()
{
}

Parallelogram::Parallelogram(double a, double b, double sharp_angle):m_a(a), m_b(b), m_sharp(sharp_angle)
{
}

void Parallelogram::print_members()
{
	std::cout << "a = " << m_a << "; b = " << m_b << "; angle = " << m_sharp << std::endl;
	std::cout << "Area = " << area() << std::endl;
}

double Parallelogram::area()
{
	return m_a*m_b*std::sin(m_sharp);
}

void Parallelogram::draw(){
}

Rectangle::Rectangle(double a, double b):Parallelogram(a, b, M_PI/2)
{
}

Square::Square(double a):Parallelogram(a, a, M_PI/2)
{
}

Rhombus::Rhombus(double a, double angle):Parallelogram(a, a, angle)
{
}

Circle::Circle(double radius):m_radius(radius)
{
}

double Circle::area()
{
	return M_PI*m_radius*m_radius;
}

void Circle::print_members()
{
	std::cout << "radius = " << m_radius << std::endl;
	std::cout << "Area = " << area() << std::endl;
}

