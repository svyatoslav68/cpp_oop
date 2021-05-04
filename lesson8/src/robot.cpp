#include "robot.h"

bool Robot::outField(const std::pair<int, int> &place) const
/* Если place находится за пределами поля, то true */
{
	return (place.first < 0) || (place.first > (c_field_width - 1)) || (place.second < 0 ) || (place.second > (c_field_height -1));	
}

void Robot::Move(direct_t direct)
{
	std::pair<int, int> new_place;
	switch (direct) {
		case Left:
			new_place = std::make_pair(m_current_place.first - 1, m_current_place.second);
			if (outField(new_place))
				throw OffTheField(m_current_place, direct);
			else
				m_current_place = new_place;
			break;
		case Right:
			new_place = std::make_pair(m_current_place.first + 1, m_current_place.second);
			if (outField(new_place))
				 throw OffTheField(m_current_place, direct);
			else
				m_current_place = new_place;
			break;
		case Up:
			new_place = std::make_pair(m_current_place.first, m_current_place.second - 1);
			if (outField(new_place))
				 throw OffTheField(m_current_place, direct);
			else
				m_current_place = new_place;
			break;
		case Down:
			new_place = std::make_pair(m_current_place.first, m_current_place.second + 1);
			if (outField(new_place))
				 throw OffTheField(m_current_place, direct);
			else
				m_current_place = new_place;
			break;
		defaut: 
			throw IllegalCommand(m_current_place);
	}

}

OffTheField::OffTheField(std::pair<int, int> current_place, Robot::direct_t direct):m_current_place(current_place), m_direct(direct)
{

}

std::ostream &operator<<(std::ostream &os, const std::pair<int,int> &place)
{
	os << "(" <<place.first << "," << place.second << ")";
	return os;
}

std::ostream &operator<<(std::ostream &os, const Robot::direct_t &direct)
{
	const std::string tmp[4] {"Up", "Down", "Left", "Right"};
	os << tmp[direct];
	return os;
}

