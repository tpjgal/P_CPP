#pragma once
// A complete C++ program
import <iostream>;

int basic_one()
{
    int answer{ 42 };              // Defines answer with value 42

    std::cout << "The answer to life, the universe, and everything is "
        << answer
        << std::endl;

    return 0;
}

void escape_sequence()
{
    std::cout << "\"Least \'said\' \\\n\t\tsoonest \'mended\'.\"" << std::endl;
}

