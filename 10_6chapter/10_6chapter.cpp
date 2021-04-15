#include <iostream>
#include <vector>
#include <array>
#include <initializer_list>

class IntArray
{
private:
    int m_length = 0;
    int* m_data = nullptr;

public:
    //Constructors
    IntArray(const int & length_in)
    {
        setArray(length_in);
        /*m_length = length_in;
        m_data = new int[m_length];*/
    }      

    //initialize()
    IntArray(const std::initializer_list<int>& list)
        : IntArray(list.size())
    {
        std::cout << "initializer constructor" << std::endl;
        int count = 0;
        for (auto& element : list)
        {
            m_data[count] = element;
            ++count;
        }
    }

    //Destructors
    ~IntArray()
    {
        delete[] m_data;
    }

    int setArray(const int & m_in)
    {
        m_length = m_in;
        m_data = new int[m_length];
    }


    //reset();
    //resize() 8-1

    //insertBefore(const int & value, const int & ix);
    //remove(const int & ix);
    //push_back(const int & value);
};

int main()
{
    //IntArray my_arr{1, 3, 5, 7, 9};
    //my_arr.insertBefore(10, 1);           // 1,10,3,5,7,9
    //my_arr.remove(3)                      // 1,10,3,7,9
    //my_arr.push_back(13)                  //1,10,3,7,9,11

    std::vector<int> int_vec;
    std::array<int, 10> int_arr;

    IntArray int_array{ 1,2,3,4,5 };

    return 0;
}