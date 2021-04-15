#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"

int main()
{
    using namespace std;

    Student std1("Jack Jack", 0);
    Student std2("Dash", 1);
    Student std3("Violet", 2);

    Teacher teacher1("Prof. Hong");
    Teacher teacher2("Prof. Good");

    // 위와 같이 로컬변수로 하는 방법도 있고, 아래와 같이 동적할당으로도 할 수 있다.
    /*Student *std1 = new Student("Jack Jack", 0);
    Student *std2 = new Student("Dash", 1);
    Student *std3 = new Student("Violet", 2);

    Teacher *teacher1 = new Teacher("Prof. Hong");
    Teacher *teacher2 = new Teacher("Prof. Good");*/

    // Composition Relationship
    Lecture lec1("Introduction to Computer Programing");
    lec1.assignTeacher(teacher1);
    lec1.registerStudent(std1);
    lec1.registerStudent(std2);
    lec1.registerStudent(std3);

    Lecture lec2("Computational Thinking");
    lec2.assignTeacher(teacher2);
    lec2.registerStudent(std1);
    
    //TODO: implement Aggregaton Relationship


    //test
    {
        cout << lec1 << endl;
        cout << lec2 << endl;

        //event
        lec2.study();

        cout << lec1 << endl;
        cout << lec2 << endl;
    }

    //delete std1;
    //delete std2;
    //delete std3;

    //delete teacher1;
    //delete teacher2;

    return 0;
}