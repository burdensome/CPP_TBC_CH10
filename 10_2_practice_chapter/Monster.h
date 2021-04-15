#pragma once
#include <string>
#include "Position2D.h"

class Monster
{
private:
	//// m_x, m_y를 다른 클래스로 만들면 어떨까?
	//std::string m_name;
	//Position2D;
	//int m_x;	// location
	//int m_y;
	std::string m_name;
	Position2D m_location;

public:
	// (1)Position2D 라는 class를 선언하기 전에 단순이 int m_x, m_y 로 할떄이고
	Monster(const std::string name_in, const Position2D& pos_in)
		: m_name(name_in) , m_location(pos_in)
	{}

	void moveTo(const Position2D& pos_target) 
	{
		m_location.set(pos_target);
	}

	friend std::ostream& operator << (std::ostream& out, const Monster& monster)
	{
		out << monster.m_name << " " << monster.m_location << std::endl;
		return out;
	}

	//// (2) Position2D class생성 후 아래와 같이 변경
	//Monster(const std::string name_in, const Position2D& pos_in)
	//	: m_name(name_in), m_location(pos_in)
	//{}

	//void moveTo(const Position2D& pos_target) {
	//	m_location.set(pos_target);
	//	/*m_x = x_target;
	//	m_y = y_target;*/
	//}

	//friend std::ostream& operator << (std::ostream& out, const Monster& monster)
	//{
	//	out << monster.m_name << " " << monster.m_location;
	//	return out;
	//}
};