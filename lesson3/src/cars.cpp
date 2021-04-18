#include <iostream>
#include <string>
#include "cars.h"

Car::Car(std::string company, std::string model):m_company(company), m_model(model)
{
	std::cout << "Constructor Car, ";
	std::cout << m_company << ":" << m_model << ".\n";
}

Car::~Car()
{
	std::cout << "Destructor of Car.\n";
}

PassengerCar::PassengerCar(std::string company, std::string model):Car(company, model)
{
	std::cout << "Constructor PassengerCar, " << m_company << ":" << m_model << ".\n";
}

PassengerCar::~PassengerCar()
{
	std::cout << "Destructor of PassengerCar.\n";
}

Bus::Bus(std::string company, std::string model):Car(company, model)
{
	std::cout << "Constructor Bus, ";
	std::cout << m_company << ":" << m_model << ".\n";
}

Bus::~Bus()
{
	std::cout << "Destructor of Bus " << m_company << ":" << m_model << ".\n";
}

Minivan::Minivan(std::string company, std::string model):PassengerCar(company, model), Bus(company, model)
{
	std::cout <<"Constructor Minivan, ";
	std::cout << PassengerCar::m_company << ":" << Bus::m_model << ".\n";
}

