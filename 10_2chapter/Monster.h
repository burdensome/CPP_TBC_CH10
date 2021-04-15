#pragma once
#include <string>
#include "Position2D.h"

class Monster
{
private:
	// m_x, m_y�� �ٸ� Ŭ������ ����� ���?
	std::string m_name;
	Position2D m_location;
	//int m_x;	// location
	//int m_y;

public:
	// (1)Position2D ��� class�� �����ϱ� ���� �ܼ��� int m_x, m_y �� �ҋ��̰�
	/*Monster(const std::string name_in, const int & x_in, const int & y_in)
		: m_name(name_in) , m_x(x_in), m_y(y_in)
	{}

	void moveTo(const int& x_target, const int& y_target) {
		m_x = x_target;
		m_y = y_target;
	}

	friend std::ostream& operator << (std::ostream& out, const Monster& monster)
	{
		out << monster.m_name << " " << monster.m_x << " " << monster.m_y << std::endl;
		return out;
	}*/

	// (2) Position2D class���� �� �Ʒ��� ���� ����
	Monster(const std::string name_in, const Position2D & pos_in)
		: m_name(name_in), m_location(pos_in)
	{}

	void moveTo(const Position2D & pos_target) {
		m_location.set(pos_target);
		/*m_x = x_target;
		m_y = y_target;*/
	}

	friend std::ostream& operator << (std::ostream& out, const Monster& monster)
	{
		out << monster.m_name << " " << monster.m_location;
		return out;
	}
};