#pragma once
#include <iostream>
import <format>;
import <numbers>;
import <limits>;

void explcit_conversion()
{
    const unsigned feet_per_yard{ 3 };
    const unsigned inches_per_foot{ 12 };
    const unsigned inches_per_yard{ feet_per_yard * inches_per_foot };

    double length{};        // Length as decimal yards
    unsigned int yards{};   // Whole yards
    unsigned int feet{};    // Whole feet
    unsigned int inches{};  // Whole inches

    std::cout << "Enter a length in yards as a decimal: ";
    std::cin >> length;

    // Get the length as yards, feet, and inches
    yards = static_cast<unsigned int>(length);
    feet = static_cast<unsigned int>((length - yards) * feet_per_yard);
    inches = static_cast<unsigned int>(length * inches_per_yard) % inches_per_foot;

    std::cout << length << " yards converts to "
        << yards << " yards "
        << feet << " feet "
        << inches << " inches." << std::endl;
}


void format_option()
{
    // Default alignment: right for numbers, left otherwise
    std::cout << std::format("{:7}|{:7}|{:7}|{:7}|{:7}\n", 1, -.2, "str", 'c', true);
    // Left and right alignment + custom fill character
    std::cout << std::format("{:*<7}|{:*<7}|{:*>7}|{:*>7}|{:*>7}\n", 1, -.2, "str", 'c', true);
    // Centered alignment + 0 formatting option for numbers
    std::cout << std::format("{:^07}|{:^07}|{:^7}|{:^7}|{:^7}\n", 1, -.2, "str", 'c', true);
}

void formating_numeric_value()
{
    const double pi{ std::numbers::pi };
    std::cout << std::format("Default: {:.2}, fixed: {:.2f}, scientific: {:.2e}, "
        "general: {:.2g}\n", pi, pi, pi, pi);
    std::cout << std::format("Default: {}, binary: {:b}, hex.: {:x}\n", 314, 314, 314);
    std::cout << std::format("Default: {}, decimal: {:d}, hex.: {:x}\n", 'c', 'c', 'c');
    std::cout << std::format("Alternative hex.: {:#x}, binary: {:#b}, HEX.: {:#X}\n",
        314, 314, 314);
    std::cout << std::format("Forced sign: {:+}, space sign: {: }\n", 314, 314);
    std::cout << std::format("All together: {:*<+10.4f}, {:+#09x}\n", pi, 314);
}

void formating_numeric_arg()
{
    const double pi{ std::numbers::pi };
    std::cout << std::format("Default: {:.2}, fixed: {:.2f}, scientific: {:.2e}, "
        "general: {:.2g}\n", pi, pi, pi, pi);
    std::cout << std::format("Default: {0}, binary: {0:b}, hex.: {0:x}\n", 314);
    std::cout << std::format("Default: {0}, decimal: {0:d}, hex.: {0:x}\n", 'c');
    std::cout << std::format("Alternative hex.: {0:#x}, binary: {0:#b}, HEX.: {0:#X}\n", 314);
    std::cout << std::format("Forced sign: {0:+}, space sign: {0: }\n", 314);
    std::cout << std::format("All together: {:*<+10.4f}, {:+#09x}\n", pi, 314);
}




void max_min_value()
{
    std::cout
        << std::format("The range for type short is from {} to {}\n",
            std::numeric_limits<short>::min(), std::numeric_limits<short>::max())
        << std::format("The range for type unsigned int is from {} to {}\n",
            std::numeric_limits<unsigned int>::min(),
            std::numeric_limits<unsigned int>::max())
        << std::format("The range for type long is from {} to {}\n",
            std::numeric_limits<long>::min(), std::numeric_limits<long>::max())
        << std::format("The positive range for type float is from {} to {}\n",
            std::numeric_limits<float>::min(), std::numeric_limits<float>::max())
        << std::format("The full range for type float is from {} to {}\n",
            std::numeric_limits<float>::lowest(), std::numeric_limits<float>::max())
        << std::format("The positive range for type double is from {} to {}\n",
            std::numeric_limits<double>::min(),
            std::numeric_limits<double>::max())
        << std::format("The positive range for type long double is from {} to {}\n",
            std::numeric_limits<long double>::min(),
            std::numeric_limits<long double>::max());
}