#pragma once

import <iostream>;    // For user input and output through std::cin / cout

// Writing values of variables to cout
void variable_ex()
{
	int apple_count{ 15 };                            // Number of apples
	int orange_count{ 5 };                            // Number of oranges
	int total_fruit{ apple_count + orange_count };    // Total number of fruit

	std::cout << "The value of apple_count is " << apple_count << std::endl;
	std::cout << "The value of orange_count is " << orange_count << std::endl;
	std::cout << "The value of total_fruit is " << total_fruit << std::endl;
}

// Converting distances

void typemodifier_ex()
{
	unsigned int yards{}, feet{}, inches{};

	// Convert a distance in yards, feet, and inches to inches
	std::cout << "Enter a distance as yards, feet, and inches "
		<< "with the three values separated by spaces: ";
	std::cin >> yards >> feet >> inches;

	const unsigned feet_per_yard{ 3 };
	const unsigned inches_per_foot{ 12 };

	unsigned total_inches{};
	total_inches = inches + inches_per_foot * (yards * feet_per_yard + feet);
	std::cout << "The distances corresponds to " << total_inches << " inches.\n";

	// Convert a distance in inches to yards feet and inches
	std::cout << "Enter a distance in inches: ";
	std::cin >> total_inches;
	feet = total_inches / inches_per_foot;
	inches = total_inches % inches_per_foot;
	yards = feet / feet_per_yard;
	feet = feet % feet_per_yard;
	std::cout << "The distances corresponds to "
		<< yards << " yards "
		<< feet << " feet "
		<< inches << " inches." << std::endl;
}


import <numbers>;   // For the pi constant

#include <cmath>    // For the square root function

void number_constant()
{
	// 2 square feet pond surface for every 6 inches of fish
	const double fish_factor{ 2.0 / 0.5 };  // Area per unit length of fish
	const double inches_per_foot{ 12.0 };

	double fish_count{};            // Number of fish
	double fish_length{};           // Average length of fish

	std::cout << "Enter the number of fish you want to keep: ";
	std::cin >> fish_count;
	std::cout << "Enter the average fish length in inches: ";
	std::cin >> fish_length;
	fish_length /= inches_per_foot;  // Convert to feet
	std::cout << '\n';

	// Calculate the required surface area
	const double pond_area{ fish_count * fish_length * fish_factor };

	// Calculate the pond diameter from the area
	const double pond_diameter{ 2.0 * std::sqrt(pond_area / std::numbers::pi) };

	std::cout << "Pond diameter required for " << fish_count << " fish is "
		<< pond_diameter << " feet.\n";
}

void mixed_variable()
{
	// 2 square feet pond surface for every 6 inches of fish
	const double fish_factor{ 2.0 / 0.5 };       // Area per unit length of fish
	const unsigned int inches_per_foot{ 12 };  // <-- Used to be of type double

	unsigned int fish_count{};  // Number of fish (used to be of type double as well)
	double fish_length{};       // Average length of fish

	std::cout << "Enter the number of fish you want to keep: ";
	std::cin >> fish_count;
	std::cout << "Enter the average fish length in inches: ";
	std::cin >> fish_length;
	fish_length /= inches_per_foot;  // Convert to feet
	std::cout << '\n';

	// Calculate the required surface area
	const double pond_area{ fish_count * fish_length * fish_factor };

	// Calculate the pond diameter from the area
	const double pond_diameter{ 2.0 * std::sqrt(pond_area / std::numbers::pi) };

	std::cout << "Pond diameter required for " << fish_count << " fish is "
		<< pond_diameter << " feet.\n";
}


import <format>;


void format_lib()
{
	// 2 square feet pond surface for every 6 inches of fish
	const double fish_factor{ 2.0 / 0.5 };       // Area per unit length of fish
	const unsigned int inches_per_foot{ 12 };

	unsigned int fish_count{};  // Number of fish
	double fish_length{};       // Average length of fish

	std::cout << "Enter the number of fish you want to keep: ";
	std::cin >> fish_count;
	std::cout << "Enter the average fish length in inches: ";
	std::cin >> fish_length;
	fish_length /= inches_per_foot;  // Convert to feet
	std::cout << '\n';

	// Calculate the required surface area
	const double pond_area{ fish_count * fish_length * fish_factor };

	// Calculate the pond diameter from the area
	const double pond_diameter{ 2.0 * std::sqrt(pond_area / std::numbers::pi) };

	std::cout << std::format("Pond diameter required for {} fish is {} feet.\n",
		fish_count, pond_diameter);
}


void format_ex_2()
{
	// 2 square feet pond surface for every 6 inches of fish
	const double fish_factor{ 2.0 / 0.5 };       // Area per unit length of fish
	const unsigned int inches_per_foot{ 12 };

	unsigned int fish_count{};  // Number of fish
	double fish_length{};       // Average length of fish

	std::cout << "Enter the number of fish you want to keep: ";
	std::cin >> fish_count;
	std::cout << "Enter the average fish length in inches: ";
	std::cin >> fish_length;
	fish_length /= inches_per_foot;  // Convert to feet
	std::cout << '\n';

	// Calculate the required surface area
	const double pond_area{ fish_count * fish_length * fish_factor };

	// Calculate the pond diameter from the area
	const double pond_diameter{ 2.0 * std::sqrt(pond_area / std::numbers::pi) };

	std::cout << std::format("Pond diameter required for {} fish is {:.2} feet.\n",
		fish_count, pond_diameter);
}


void format_trycatch()
{
	// 2 square feet pond surface for every 6 inches of fish
	const double fish_factor{ 2.0 / 0.5 };       // Area per unit length of fish
	const unsigned int inches_per_foot{ 12 };

	unsigned int fish_count{};  // Number of fish
	double fish_length{};       // Average length of fish

	std::cout << "Enter the number of fish you want to keep: ";
	std::cin >> fish_count;
	std::cout << "Enter the average fish length in inches: ";
	std::cin >> fish_length;
	fish_length /= inches_per_foot;  // Convert to feet
	std::cout << '\n';

	// Calculate the required surface area
	const double pond_area{ fish_count * fish_length * fish_factor };

	// Calculate the pond diameter from the area
	const double pond_diameter{ 2.0 * std::sqrt(pond_area / std::numbers::pi) };

	try
	{
		std::cout << std::format("Pond diameter required for {:.2} fish is {:.2} feet.\n",
			fish_count, pond_diameter);
	}
	catch (const std::format_error& error)
	{
		std::cout << error.what();  // Outputs "precision not allowed for this argument type"
	}
}