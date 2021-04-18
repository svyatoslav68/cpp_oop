#include <iostream>
#include "cards.h"

int main(int argc, char **argv)
{
	Card first(Card::DIAMONDS, Card::ACE);
	first.flip();
	std::cout << "Card: ";
	first.display();
	std::cout << std::endl;
}
