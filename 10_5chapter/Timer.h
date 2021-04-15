#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

class Timer
{
    using clock_t = std::chrono::high_resolution_clock;
    using secont_t = std::chrono::duration<double, std::ratio<1>>;

    // Time Ÿ���� ��ü�� �������ڸ��� start_time ��� ������ ���� �ð��� ���Եȴ�.
    std::chrono::time_point<clock_t> start_time = clock_t::now();

public:
    void elapsed()
    {
        std::chrono::time_point<clock_t> end_time = clock_t::now();  // elapsed() ��� �Լ��� ������ �ð�

        // elapsed() ��� �Լ��� ������ڸ��� end_time - start_time ���־� ���� �ð��� ���ϰ� ����Ѵ�.
        std::cout << std::chrono::duration_cast<secont_t>(end_time - start_time).count() << std::endl;
    }
};