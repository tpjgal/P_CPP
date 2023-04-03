#pragma once
#include <iostream>

void likelyexample()
{
    int a{0};
    cin >>a;
    if (a > 3) [[likely]] {

        std::cout << "a is greater then 3" << std::endl;

    }
    else [[unlikely]] {

        std::cout << "a is smaller then 3" << std::endl;

    }
}