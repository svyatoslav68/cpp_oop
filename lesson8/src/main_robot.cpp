#include <iostream>
#include "robot.h"

int main(int argc, char **argv)
{
	Robot robot(0, 0);
	std::cout << "Begin: " << robot.getPlace() << std::endl;
	try{
		robot.Move(Robot::Down);
		robot.Move(Robot::Down);
		robot.Move(Robot::Right);
	}
	catch (OffTheField &e) {
		std::cout << "Exception OffTheField: " << e.getPlace() << " " << e.getDirect() << std::endl;
	}
	catch (IllegalCommand &e) {
		std::cout << "Exception IllegalCommand: " << e.getPlace() << std::endl;
	}
	std::cout << robot.getPlace() << std::endl;
	robot.setPlace(8,9);
	std::cout << "-------------------------------\n";
	std::cout << "Begin: " << robot.getPlace() << std::endl;
	try{
		robot.Move(Robot::Down);
		robot.Move(Robot::Down);
		robot.Move(Robot::Right);
	}
	catch (OffTheField &e) {
		std::cout << "Exception OffTheField: " << e.getPlace() << " " << e.getDirect() << std::endl;
	}
	catch (IllegalCommand &e) {
		std::cout << "Exception IllegalCommand: " << e.getPlace() << std::endl;
	}
	std::cout << robot.getPlace() << std::endl;
}

