#pragma once
#include <utility>
#include <iostream>


class Robot
{
public:
	/* Размеры поля */
	static const unsigned int c_field_width = 10;
	static const unsigned int c_field_height = 10;
	enum direct_t {Up, Down, Left, Right};
	Robot():m_current_place(std::make_pair(0,0)) {}
	Robot(int x, int y):m_current_place(std::make_pair(x,y)) {}
	void Move(direct_t direct);
	std::pair<int, int> getPlace() const {return m_current_place;}
	//friend std::ostream &operator<<(std::ostream &os, const Robot &robot);
private:
	/*class OffTheField{
		public:
			OffTheField();
		private:
	};*/
	bool outField(const std::pair<int, int>&) const;
	std::pair<int, int> m_current_place;
};

class IllegalCommand
{
public:
	IllegalCommand(std::pair<int, int> current_place):m_current_place(current_place) {}
	std::pair<int, int> getPlace() const {return m_current_place;}
private:
	std::pair<int, int> m_current_place;
};

class OffTheField
{
public:
	OffTheField(std::pair<int, int> current_place, Robot::direct_t direct);
	std::pair<int, int> getPlace() const {return m_current_place;}
	Robot::direct_t getDirect() const {return m_direct;}
private:
	std::pair<int, int> m_current_place;
	Robot::direct_t m_direct;
};

std::ostream &operator<<(std::ostream &os, const std::pair<int,int> &place);

std::ostream &operator<<(std::ostream &os, const Robot::direct_t &direct);

