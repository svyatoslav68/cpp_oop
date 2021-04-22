#include <iostream>
#include <vector>
#include "cards.h"
#include "hand.h"

int initCards(Hand &all, int number)
{
	int result = 0;
	for (int i = 0; i < number; ++i){
		for (int j = 0; j < NUMBER_VALUE; ++j){
			for (int k = 0; k < NUMBER_SUIT; ++ k){
				Card *newCard = new Card(static_cast<Card::suits_t>(k), static_cast<Card::cardsvalue_t>(j));
				newCard->flip();
				all.Add(newCard);
				++result;
			}
		}
	}
	return result;
}

int main(int argc, char **argv)
{
	Hand all_cards;
	initCards(all_cards, 1);
	all_cards.display();
	all_cards.Sort();
	std::cout << "All cards: \n";
	all_cards.display();
	all_cards.Clear();
	all_cards.display();
	Hand new_hand;
	new_hand.Add(new Card(Card::SPADES, Card::QUEEN));
	new_hand.Add(new Card(Card::CLUBS, Card::FOUR));
	new_hand.Add(new Card(Card::DIAMONDS, Card::ACE));
	//std::for_each(new_hand.begin(), new_hand.end(), Card::flip());
	new_hand.OpenAll();
	new_hand.Sort();
	std::cout << "New hand:\n";
	new_hand.display();
	std::cout << "New hand have "<< new_hand.getValue() << " points.\n";
}

