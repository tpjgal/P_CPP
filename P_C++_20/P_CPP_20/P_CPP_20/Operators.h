#pragma once
import <iostream>;
import <format>;

void bitwise_operator()
{
	const unsigned int red{ 0xFF0000u };   // Color red
	const unsigned int white{ 0xFFFFFFu }; // Color white - RGB all maximum

	std::cout << "Try out bitwise complement, AND and OR operators:\n";
	std::cout << std::format("Initial value:       red = {:08X}\n", red);
	std::cout << std::format("Complement:         ~red = {:08X}\n", ~red);

	std::cout << std::format("Initial value:     white = {:08X}\n", white);
	std::cout << std::format("Complement:       ~white = {:08X}\n", ~white);

	std::cout << std::format("Bitwise AND: red & white = {:08X}\n", red & white);
	std::cout << std::format("Bitwise  OR: red | white = {:08X}\n", red | white);

	std::cout << "\nNow try successive exclusive OR operations:\n";
	unsigned int mask{ red ^ white };
	std::cout << std::format("mask = red ^ white = {:08X}\n", mask);
	std::cout << std::format("        mask ^ red = {:08X}\n", mask ^ red);
	std::cout << std::format("      mask ^ white = {:08X}\n", mask ^ white);

	unsigned int flags{ 0xFF };            // Flags variable
	unsigned int bit1mask{ 0x1 };          // Selects bit 1
	unsigned int bit6mask{ 0b100000 };     // Selects bit 6
	unsigned int bit20mask{ 1u << 19 };    // Selects bit 20

	std::cout << "Use masks to select or set a particular flag bit:\n";
	std::cout << std::format("Select bit 1 from flags  : {:08X}\n", flags & bit1mask);
	std::cout << std::format("Select bit 6 from flags  : {:08X}\n", flags & bit6mask);
	std::cout << std::format("Switch off bit 6 in flags: {:08X}\n", flags &= ~bit6mask);
	std::cout << std::format("Switch on bit 20 in flags: {:08X}\n", flags |= bit20mask);
}



// Demonstrating scope, lifetime, and global variables

long count1{ 999L };         // Global count1
double count2{ 3.14 };       // Global count2
int count3;                // Global count3 - default initialization

void scope_lifetime()
{ /* Function scope starts here */
	int count1{ 10 };          // Hides global count1
	int count3{ 50 };          // Hides global count3
	std::cout << "Value of outer count1 = " << count1 << std::endl;
	std::cout << "Value of global count1 = " << ::count1 << std::endl;
	std::cout << "Value of global count2 = " << count2 << std::endl;

	{ /* New block scope starts here... */
		int count1{ 20 };        // This is a new variable that hides the outer count1
		int count2{ 30 };        // This hides global count2
		std::cout << "\nValue of inner count1 = " << count1 << std::endl;
		std::cout << "Value of global count1 = " << ::count1 << std::endl;
		std::cout << "Value of inner count2 = " << count2 << std::endl;
		std::cout << "Value of global count2 = " << ::count2 << std::endl;

		count1 = ::count1 + 3;   // This sets inner count1 to global count1+3
		++::count1;              // This changes global count1
		std::cout << "\nValue of inner count1 = " << count1 << std::endl;
		std::cout << "Value of global count1 = " << ::count1 << std::endl;
		count3 += count2;        // Increments outer count3 by inner count2;

		int count4{};
	} /* ...and ends here. */

  // std::cout << count4 << std::endl;    // count4 does not exist in this scope!

	std::cout << "\nValue of outer count1 = " << count1 << std::endl
		<< "Value of outer count3 = " << count3 << std::endl;
	std::cout << "Value of global count3 = " << ::count3 << std::endl;

	std::cout << "Value of global count2 = " << count2 << std::endl;
} /* Function scope ends here */

// Operations with enumerations

import <format>;

void enum_operation()
{
	enum class Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
	Day yesterday{ Day::Monday }, today{ Day::Tuesday }, tomorrow{ Day::Wednesday };
	const Day poets_day{ Day::Friday };

	enum class Punctuation : char { Comma = ',', Exclamation = '!', Question = '?' };
	Punctuation ch{ Punctuation::Comma };

	std::cout << std::format("yesterday's value is {}{} but poets_day's is {}{}\n",
		static_cast<int>(yesterday), static_cast<char>(ch),
		static_cast<int>(poets_day), static_cast<char>(Punctuation::Exclamation));

	today = Day::Thursday;        // Assign new ...
	ch = Punctuation::Question;   // ... enumerator values
	tomorrow = poets_day;         // Copy enumerator value

	std::cout << std::format("Is today's value({}) the same as poets_day({}){}\n",
		static_cast<int>(today), static_cast<int>(poets_day), static_cast<char>(ch));

	//   ch = tomorrow;             /* Uncomment any of these for an error */
	//   tomorrow = Friday;
	//   today = 6;
}
