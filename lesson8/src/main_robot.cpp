#include <iostream>
#include "robot.h"

int main(int argc, char **argv)
{
	Robot robot(9,9);
	std::cout << "Begin: " << robot.getPlace() << std::endl;
	try{
		robot.MoveUp(Robot::Down);
		robot.MoveUp(Robot::Down);
		robot.MoveUp(Robot::Right);
	}
	catch (OffTheField &e) {
		std::cout << "Exception OffTheField: " << e.getPlace() << " " << e.getDirect() << std::endl;
	}
	catch (IllegalCommand &e) {
		std::cout << "Exception IllegalCommand: " << e.getPlace() << std::endl;
	}
	std::cout << robot.getPlace() << std::endl;
}

