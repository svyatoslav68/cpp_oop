#include <iostream>
#include <string>
#include "person.h"

Person::Person(std::string name, int age, t_sex sex, int weight):m_name(name), m_age(age), m_sex(sex), m_weight(weight)
{
}

void Person::setName(std::string name)
{
	m_name = name;
}

void Person::addAge(int years)
{
    m_age += years;
}

void Person::setAge(int years)
{
	if (years > 0)
		m_age = years;
}

void Person::setWeight(int kg)
{
    m_weight = kg;
}

void Student::setCurs(int curs)
{
	if ((curs > 0) && (curs < 6))
		m_curs = curs;
}

int Student::count = 0;

Student::Student(std::string name, int age, t_sex sex, int weight, int curs):Person(name, age, sex, weight),m_curs(curs)
{
	count++;
}

void Student::printInfoStudent() const
{
	std::cout << "Name: " << m_name << "\nage = " << m_age << ", curs = " << m_curs << ".\n";
}

Student::~Student()
{
	std::cout << "Deleted " << m_name << std::endl;
	count--;
}

