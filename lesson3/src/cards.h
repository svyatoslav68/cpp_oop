#ifndef CARD_H
#define CARD_H

class Card
{
	public:
		enum suits_t {SPADES, HEARTS, CLUBS, DIAMONDS};
		enum cardsvalue_t {	TWO,
							THREE,
							FOUR,
							FIVE,
							SIX,
							SEVEN,
							EIGHT,
							NINE,
							TEN,
							JACK,
							QUEEN,
							KING,
							ACE
							};
		enum states_t {	SHIRT = 0,
						PICTURE = 1
					}; 
		Card(suits_t suit, cardsvalue_t value);
		unsigned int getValue();
		states_t getState();
		bool flip();
		void display();
	private:
		suits_t m_suit;
		cardsvalue_t m_value;
		states_t m_state;
};

#endif // CARD_H
