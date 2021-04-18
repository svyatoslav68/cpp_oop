#ifndef CARS_H
#define CARS_H

class Car
{
	public:
		Car() {};
		Car(std::string company, std::string model);
		virtual ~Car();
	protected:
		std::string m_company;
		std::string m_model;
};

class PassengerCar:public Car
{
	public:
	PassengerCar() {};
		PassengerCar(std::string company, std::string model);
		virtual ~PassengerCar();
};

class Bus:public Car
{
	public:
	 	Bus() {};
		Bus(std::string company, std::string model);
		virtual ~Bus();
};

class Minivan:public PassengerCar, Bus
{
	public:
		Minivan(std::string company, std::string model);
};


#endif //CARS_H
