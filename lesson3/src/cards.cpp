#include <iostream>
#include <string>
#include "cards.h"

Card::Card(suits_t suit, cardsvalue_t value):m_suit(suit), m_value(value), m_state(SHIRT)
{
}

unsigned int Card::getValue()
{
	switch (m_value){
		case TWO:
			return 2;
		case THREE:
			return 3;
		case FOUR:
			return 4;
		case FIVE:
			return 5;
		case SIX:
			return 6;
		case SEVEN:
			return 7;
		case EIGHT:
			return 8;
		case NINE:
			return 9;
		case TEN:
		case JACK:
		case QUEEN:
		case KING:
			return 10;
		case ACE:
			return 1;
		default:
			return 0;
	}
}

Card::states_t Card::getState()
{
	return m_state;
}

bool Card::flip()
{
	m_state = static_cast<states_t>(!static_cast<bool>(m_state));
	return m_state;
}

void Card::display()
{
	if (m_state == SHIRT)
		std::cout << "***";
	else {
		std::string picture_suit;
		std::string picture_value;
		switch (m_value){
			case TWO:
			case THREE:
			case FOUR:
			case FIVE:
			case SIX:
			case SEVEN:
			case EIGHT:
			case NINE:
			case TEN:
				std::cout << getValue();
				break;
			case JACK:	
				break;
			case QUEEN:	
				break;
			case KING:	
				break;
			case ACE:	
				break;
			default:
				std::cout << "**";
		}
		switch (m_suit) {
			case SPADES:
				picture_suit = "\u2660";
				break;
			case HEARTS:
				picture_suit = "\u2665";
				break;
			case CLUBS:
				picture_suit = "\u2663";
				break;
			case DIAMONDS:
				picture_suit = "\u2666";
				break;
		}
		std::cout << picture_suit;
	}
}
