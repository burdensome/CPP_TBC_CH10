#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture {
private:
	std::string m_name;

	//Teacher teacher;
	//std::vector<Student> students;

	Teacher *teacher;
	std::vector<Student*> students;	//���� ������ ��Ȯ�� ���ذ� ���� �ʾҴµ�.. ���͸� �ٽ� ���� ���ƿ��ϳ�?

public:
	Lecture(const std::string& name_in)
		: m_name(name_in)
	{}

	~Lecture()
	{
		// do NOT delete teacher
		// do NOT DELTE STUDENTS
	}

	void assignTeacher(Teacher* teacher_input)
	{
		std::cout << "teacher_input : " << *(teacher_input) << std::endl;
		std::cout << "teacher_address : " << (teacher_input) << std::endl;
		teacher = teacher_input;
	}	

	void registerStudent(Student * student_input)
	{
		std::cout << "student_input : " << student_input << std::endl;
		students.push_back(student_input);
	}

	void study()
	{
		std::cout << m_name << " Study " << std::endl << std::endl;

		for (auto& element : students)	// Note : 'auto element' doesn't work, ampersand���� �Ʒ�ó�� �����ϸ� ���� ������Ʈ�� �ȵ�.
			(*element).setIntel(element->getIntel() + 1);//setIntel(element->getIntel() + 1);
	}

	friend std::ostream& operator << (std::ostream& out, const Lecture& lecture)
	{
		out << "Lecture name : " << lecture.m_name << std::endl;

		out << *(lecture.teacher) << std::endl;
		for (auto element : lecture.students)
			out << *element << std::endl;

		return out;

		/*out << *lecture.teacher << std::endl;
		for (auto element : lecture.students)
			out << *element << std::endl;
		return out;*/
	}
};	