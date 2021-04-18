#include <iostream>
#include "figures.h"

int main(int argc, char **argv)
{
	Parallelogram par1(10,5,1);
	par1.print_members();
	Rectangle rec1(10,5);
	rec1.print_members();
	Square squ1(5);
	squ1.print_members();
	Rhombus rho1(5, .9);
	rho1.print_members();
	Circle cir1(3);
	cir1.print_members();
	return 0;
}

