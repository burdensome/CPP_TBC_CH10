//객체들의 관계 중 "구성관계"
//6시 43분부터 다시 들으면됨
#include <iostream>
#include "Monster.h"

using namespace std;

int main()
{
    //Monster mon1("Sanson", Position2D(0, 0));
    ////mon1.m_location;
    //cout << mon1 << endl;

    //Monster mon2("Parival", Position2D(0, 0));
    ////mon2.m_location;

    ////while (1) //game loop
    //{
    //    // event
    //    mon1.moveTo(Position2D(1, 1));
    //    cout << mon1 << endl;
    //}

    Monster mon1("Sanson", Position2D(0,0));
    cout << mon1 << endl;

    Monster mon2("Parsival", Position2D(0, 0));
    {
        mon1.moveTo(Position2D(1,1));
        cout << mon1 << endl;
    }

    return 0;
}