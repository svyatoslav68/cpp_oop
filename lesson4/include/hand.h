#ifndef HAND_H
#define HAND_H

class Hand
{
	public:
		Hand();
		~Hand();
		void Add(Card *card);
		void Clear();
		void OpenAll(); // Открывает все карты на руке
		void Sort(bool reverse = false); // 
		unsigned int getValue();
		void display();
	private:
		std::vector<Card *> cards;
};

#endif //HAND_H
