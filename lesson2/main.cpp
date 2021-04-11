#include <iostream>
#include <string>
#include "person.h"

int main(int argc, char **argv)
{
	// Testing classes Person, Student
	std::cout << "Number of students: " << Student::count << std::endl;
	Student Ivan(std::string("Ivan"), 17, Person::m, 82, 1);
	std::cout << "Number of students: " << Student::count << std::endl;
	Ivan.addAge();
	Ivan.printInfoStudent();
	Student *Maria = new Student(std::string("Maria"), 18, Person::f, 56, 1);
	Maria->setCurs(2);
	Maria->printInfoStudent();
	std::cout << "Number of students: " << Student::count << std::endl;
	delete Maria;
	std::cout << "Number of students: " << Student::count << std::endl;
	// Testing classes Fruits
    Apple a("red");
    Banana b;
    GrannySmith c;
    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
    return 0;

}
