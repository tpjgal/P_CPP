#pragma once
// The size of pointers
import <iostream>;

void sizeof_operators()
{
	// Print out the size (in number of bytes) of some data types
	// and the corresponding pointer types:
	std::cout << sizeof(double) << " > " << sizeof(char16_t) << std::endl;
	std::cout << sizeof(double*) << " == " << sizeof(char16_t*) << std::endl;
}

// Dereferencing pointers
// Calculates the purchase price for a given quantity of items
import <iostream>;
import <format>;

void dereferenceing_ptr()
{
	int unit_price{ 295 };                // Item unit price in cents
	int count{};                        // Number of items ordered
	int discount_threshold{ 25 };         // Quantity threshold for discount
	double discount{ 0.07 };              // Discount for quantities over discount_threshold

	int* pcount{ &count };                // Pointer to count
	std::cout << "Enter the number of items you want: ";
	std::cin >> *pcount;
	std::cout << std::format("The unit price is ${:.2f}\n", unit_price / 100.0);

	// Calculate gross price
	int* punit_price{ &unit_price };      // Pointer to unit_price
	int price{ *pcount * *punit_price };  // Gross price via pointers
	auto* pprice{ &price };                // Pointer to gross price

	// Calculate net price in US$
	double net_price{};
	double* pnet_price{ nullptr };
	pnet_price = &net_price;
	if (*pcount > discount_threshold)
	{
		std::cout <<
			std::format("You qualify for a discount of {:.0f} percent.\n", discount * 100);
		*pnet_price = price * (1 - discount) / 100;
	}
	else
	{
		net_price = *pprice / 100;
	}
	std::cout << std::format("The net price for {} items is ${:.2f}\n", *pcount, net_price);
}

// Initializing pointers with strings
import <iostream>;

void init_ptr_string()
{
	const char* pstar1{ "Fatty Arbuckle" };
	const char* pstar2{ "Clara Bow" };
	const char* pstar3{ "Lassie" };
	const char* pstar4{ "Slim Pickens" };
	const char* pstar5{ "Boris Karloff" };
	const char* pstar6{ "Mae West" };
	const char* pstar7{ "Oliver Hardy" };
	const char* pstar8{ "Greta Garbo" };
	const char* pstr{ "Your lucky star is " };

	std::cout << "Pick a lucky star! Enter a number between 1 and 8: ";
	size_t choice{};
	std::cin >> choice;

	switch (choice)
	{
	case 1: std::cout << pstr << pstar1 << std::endl; break;
	case 2: std::cout << pstr << pstar2 << std::endl; break;
	case 3: std::cout << pstr << pstar3 << std::endl; break;
	case 4: std::cout << pstr << pstar4 << std::endl; break;
	case 5: std::cout << pstr << pstar5 << std::endl; break;
	case 6: std::cout << pstr << pstar6 << std::endl; break;
	case 7: std::cout << pstr << pstar7 << std::endl; break;
	case 8: std::cout << pstr << pstar8 << std::endl; break;
	default: std::cout << "Sorry, you haven't got a lucky star." << std::endl;
	}
}


// Using an array of pointers
import <iostream>;
import <array>;      // for std::size()

void arr_ptr()
{
	const char* pstars[]{
						   "Fatty Arbuckle", "Clara Bow", "Lassie",
						   "Slim Pickens", "Boris Karloff", "Mae West",
						   "Oliver Hardy", "Greta Garbo"
	};

	std::cout << "Pick a lucky star! Enter a number between 1 and "
		<< std::size(pstars) << ": ";
	size_t choice{};
	std::cin >> choice;

	if (choice >= 1 && choice <= std::size(pstars))
	{
		std::cout << "Your lucky star is " << pstars[choice - 1] << std::endl;
	}
	else
	{
		std::cout << "Sorry, you haven't got a lucky star." << std::endl;
	}
}

// Calculating primes using pointer notation
import <iostream>;
import <format>;

void ptr_notation()
{
	const size_t max{ 100 };    // Number of primes required
	long primes[max]{ 2L };     // First prime defined
	size_t count{ 1 };          // Count of primes found so far
	long trial{ 3L };           // Candidate prime

	while (count < max)
	{
		bool isprime{ true }; // Indicates when a prime is found

		// Try dividing the candidate by all the primes we have
		for (size_t i{}; i < count && isprime; ++i)
		{
			isprime = trial % *(primes + i) > 0;   // False for exact division
		}

		if (isprime)
		{                              // We got one...
			*(primes + count++) = trial; // ...so save it in primes array
		}

		trial += 2;                    // Next value for checking
	}

	// Output primes 10 to a line
	std::cout << "The first " << max << " primes are:" << std::endl;
	for (size_t i{}; i < max; ++i)
	{
		std::cout << std::format("{:7}", *(primes + i));
		if ((i + 1) % 10 == 0)           // Newline after every 10th prime
			std::cout << std::endl;
	}
	std::cout << std::endl;
}

// Calculating primes using dynamic memory allocation
import <iostream>;
import <format>;

#include <cmath>       // For square root function (std::sqrt())

int dynamic_mem_alloc()
{
	size_t max{};       // Number of primes required

	std::cout << "How many primes would you like? ";
	std::cin >> max;          // Read number required

	if (max == 0) return 0;   // Zero primes: do nothing

	auto* primes{ new unsigned[max] };  // Allocate memory for max primes

	size_t count{ 1 };         // Count of primes found
	primes[0] = 2;            // Insert first seed prime

	unsigned trial{ 3 };       // Initial candidate prime

	while (count < max)
	{
		bool isprime{ true };    // Indicates when a prime is found

		const auto limit = static_cast<unsigned>(std::sqrt(trial));
		for (size_t i{}; primes[i] <= limit && isprime; ++i)
		{
			isprime = trial % primes[i] > 0;  // False for exact division
		}

		if (isprime)                // We got one...
			primes[count++] = trial;  // ...so save it in primes array

		trial += 2;                 // Next value for checking
	}

	// Output primes 10 to a line
	for (size_t i{}; i < max; ++i)
	{
		std::cout << std::format("{:10}", primes[i]);
		if ((i + 1) % 10 == 0)      // After every 10th prime...
			std::cout << std::endl;   // ...start a new line
	}
	std::cout << std::endl;

	delete[] primes;              // Free up memory...
	primes = nullptr;             // ... and reset the pointer
}

// Using smart pointers
import <iostream>;
import <format>;
import <memory>;   // For smart pointers
import <vector>;   // For std::vector<> container
#include <vector>
#include <cctype>  // For std::toupper()

void smart_pointer()
{
	std::vector<std::shared_ptr<std::vector<double>>> records; // Temperature records by days
	size_t day{ 1 };       // Day number

	while (true)           // Collect temperatures by day
	{
		// Vector to store current day's temperatures created in the free store
		auto day_records{ std::make_shared<std::vector<double>>() };
		records.push_back(day_records);   // Save pointer in records vector

		std::cout << "Enter the temperatures for day " << day++
			<< " separated by spaces. Enter 1000 to end:\n";

		while (true)
		{ // Get temperatures for current day
			double t{};        // A temperature
			std::cin >> t;
			if (t == 1000.0) break;

			day_records->push_back(t);
		}

		std::cout << "Enter another day's temperatures (Y or N)? ";
		char answer{};
		std::cin >> answer;
		if (std::toupper(answer) != 'Y') break;
	}

	day = 1;

	for (auto record : records)
	{
		double total{};
		size_t count{};

		std::cout << std::format("\nTemperatures for day {}:\n", day++);
		for (auto temp : *record)
		{
			total += temp;
			std::cout << std::format("{:6.2f}", temp);
			if (++count % 5 == 0) std::cout << std::endl;
		}

		std::cout << std::format("\nAverage temperature: {:.2f}", total / count) << std::endl;
	}
}