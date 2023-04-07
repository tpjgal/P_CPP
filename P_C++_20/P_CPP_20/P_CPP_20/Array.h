#pragma once
// Using a for loop with an array
import <iostream>;

void for_array()
{
    const unsigned size{ 6 };                        // Array size
    unsigned height[size]{ 26, 37, 47, 55, 62, 75 }; // An array of heights

    unsigned total{};                              // Sum of heights
    for (size_t i{}; i < size; ++i)
    {
        total += height[i];
    }

    const unsigned average{ total / size };            // Calculate average height
    std::cout << "The average height is " << average << std::endl;

    unsigned count{};
    for (size_t i{}; i < size; ++i)
    {
        if (height[i] < average) ++count;
    }
    std::cout << count << " people are below average height." << std::endl;
}

// Obtaining the number of array elements

import <array>;       // for std::size()

void obtain_no_array()
{
    int values[]{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };

    std::cout << "There are " << std::size(values) << " elements in the array.\n";

    int sum{};
    const size_t old_school_size{ sizeof(values) / sizeof(values[0]) };
    for (size_t i{}; i < old_school_size; ++i)
    {
        sum += values[i];
    }
    std::cout << "The sum of the array elements is " << sum << std::endl;
}

// Floating-point control in a for loop
import <format>;

import <numbers>;

void floatingpoint_control_for()
{
    const size_t values_per_line{ 3 }; // Outputs per line
    size_t values_current_line{};    // Number of outputs on current line
    for (double radius{ 0.2 }; radius <= 3.0; radius += 0.2)
    {
        const auto area{ std::numbers::pi * radius * radius };
        std::cout << std::format("radius = {:4.2f}, area = {:5.2f}; ", radius, area);
        if (++values_current_line == values_per_line)  // When enough values written...
        {
            std::cout << std::endl;    // ...start a new line...
            values_current_line = 0;   // ...and reset the line counter
        }
    }
    std::cout << std::endl;
}

void floatingpoint_control_for_1()
{
    const size_t values_per_line{ 3 }; // Outputs per line
    size_t values_current_line{};    // Number of outputs on current line
    for (double radius{ 0.2 }; radius < 3.0 + 0.001; radius += 0.2)
    {
        const auto area{ std::numbers::pi * radius * radius };
        std::cout << std::format("radius = {:4.2f}, area = {:5.2f}; ", radius, area);
        if (++values_current_line == values_per_line)  // When enough values written...
        {
            std::cout << std::endl;    // ...start a new line...
            values_current_line = 0;   // ...and reset the line counter
        }
    }
    std::cout << std::endl;
}


// Multiple initializations in a loop expression


void multiple_initialization_loop()
{
    unsigned int limit{};
    std::cout << "This program calculates n! and the sum of the integers "
        << "up to n for values 1 to limit.\n";
    std::cout << "What upper limit for n would you like? ";
    std::cin >> limit;

    // The format string for all rows of the table
    const auto table_format{ "{:>8} {:>8} {:>20}\n" };

    // Output column headings
    std::cout << std::format(table_format, "integer", "sum", "factorial");

    for (unsigned long long n{ 1 }, sum{}, factorial{ 1 }; n <= limit; ++n)
    {
        sum += n;           // Accumulate sum to current n
        factorial *= n;     // Calculate n! for current n
        std::cout << std::format(table_format, n, sum, factorial);
    }
}

// Multiple calculations in a loop expression's third control expression
// by using the comma operator
import <iostream>;
import <format>;

void multiple_loop_expression()
{
    unsigned int limit{};
    std::cout << "This program calculates n! and the sum of the integers "
        << "up to n for values 1 to limit.\n";
    std::cout << "What upper limit for n would you like? ";
    std::cin >> limit;

    // The format string for all rows of the table
    const auto table_format{ "{:>8} {:>8} {:>20}\n" };

    // Output column headings
    std::cout << std::format(table_format, "integer", "sum", "factorial");

    for (unsigned long long n{ 1 }, sum{ 1 }, factorial{ 1 }; n <= limit;
        ++n, sum += n, factorial *= n)
    {
        std::cout << std::format(table_format, n, sum, factorial);
    }
}

// Using a while loop to calculate the sum of integers from 1 to n and n!
import <iostream>;
import <format>;

void loop_ex()
{
    unsigned int limit{};
    std::cout << "This program calculates n! and the sum of the integers "
        << "up to n for values 1 to limit.\n";
    std::cout << "What upper limit for n would you like? ";
    std::cin >> limit;

    // The format string for all rows of the table
    const auto table_format{ "{:>8} {:>8} {:>20}\n" };

    // Output column headings
    std::cout << std::format(table_format, "integer", "sum", "factorial");

    unsigned int n{};
    unsigned int sum{};
    unsigned long long factorial{ 1ULL };

    while (++n <= limit)
    {
        sum += n;                    // Accumulate sum to current n
        factorial *= n;              // Calculate n! for current n
        std::cout << std::format(table_format, n, sum, factorial);
    }
}

// Using a do-while loop to manage input
import <iostream>;

#include <cctype>                                  // For tolower() function

void dowhile_ex()
{
    char reply{};                                   // Stores response to prompt for input
    int count{};                                    // Counts the number of input values
    double temperature{};                           // Stores an input value
    double total{};                                 // Stores the sum of all input values
    do
    {
        std::cout << "Enter a temperature reading: ";  // Prompt for input
        std::cin >> temperature;                       // Read input value

        total += temperature;                          // Accumulate total of values
        ++count;                                       // Increment count

        std::cout << "Do you want to enter another? (y/n): ";
        std::cin >> reply;                             // Get response
    } while (std::tolower(reply) == 'y');

    std::cout << "The average temperature is " << total / count << std::endl;
}

// Generating multiplication tables using nested loops
import <iostream>;
import <format>;

#include <cctype>

int nested_loop()
{
    size_t table{};              // Table size
    const size_t table_min{ 2 };   // Minimum table size - at least up to the 2-times
    const size_t table_max{ 12 };  // Maximum table size
    char reply{};                // Response to prompt

    do
    {
        std::cout <<
            std::format("What size table would you like ({} to {})? ", table_min, table_max);
        std::cin >> table;          // Get the table size
        std::cout << std::endl;

        // Make sure table size is within the limits
        if (table < table_min || table > table_max)
        {
            std::cout << "Invalid table size entered. Program terminated." << std::endl;
            return 1;
        }

        // Create the top line of the table
        std::cout << std::format("{:>6}", '|');
        for (size_t i{ 1 }; i <= table; ++i)
        {
            std::cout << std::format(" {:3} |", i);
        }
        std::cout << std::endl;

        // Create the separator row
        for (size_t i{}; i <= table; ++i)
        {
            std::cout << "------";
        }
        std::cout << std::endl;

        for (size_t i{ 1 }; i <= table; ++i)
        {    // Iterate over rows
            std::cout << std::format(" {:3} |", i);      // Start the row

            // Output the values in a row
            for (size_t j{ 1 }; j <= table; ++j)
            {
                std::cout << std::format(" {:3} |", i * j);  // For each column
            }
            std::cout << std::endl;                      // End the row
        }

        // Check if another table is required
        std::cout << "\nDo you want another table (y or n)? ";
        std::cin >> reply;

    } while (std::tolower(reply) == 'y');
}

// Generating multiplication tables using nested loops
// In this version an indefinite for loop is used, in combination with break statements.
import <iostream>;
import <format>;

#include <cctype>		// for std::tolower()

int nested_loop_1()
{
    size_t table{};              // Table size
    const size_t table_min{ 2 };   // Minimum table size - at least up to the 2-times
    const size_t table_max{ 12 };  // Maximum table size
    char reply{};                // Response to prompt

    const size_t max_tries{ 3 };   // Max. number of times a user can try entering a table size
    do
    {
        for (size_t count{ 1 }; ; ++count)  // Indefinite loop
        {
            std::cout <<
                std::format("What size table would you like ({} to {})? ", table_min, table_max);
            std::cin >> table; // Get the table size

            // Make sure table size is within the limits
            if (table >= table_min && table <= table_max)
            {
                break;      // Exit the input loop
            }
            else if (count < max_tries)
            {
                std::cout << "Invalid input - try again.\n";
            }
            else
            {
                std::cout << "Invalid table size entered - yet again!\nSorry, only "
                    << max_tries << " allowed - program terminated." << std::endl;
                return 1;
            }
        }


        // Create the top line of the table
        std::cout << std::format("{:>6}", '|');
        for (size_t i{ 1 }; i <= table; ++i)
        {
            std::cout << std::format(" {:3} |", i);
        }
        std::cout << std::endl;

        // Create the separator row
        for (size_t i{}; i <= table; ++i)
        {
            std::cout << "------";
        }
        std::cout << std::endl;

        for (size_t i{ 1 }; i <= table; ++i)
        {    // Iterate over rows
            std::cout << std::format(" {:3} |", i);      // Start the row

            // Output the values in a row
            for (size_t j{ 1 }; j <= table; ++j)
            {
                std::cout << std::format(" {:3} |", i * j);  // For each column
            }
            std::cout << std::endl;                      // End the row
        }

        // Check if another table is required
        std::cout << "\nDo you want another table (y or n)? ";
        std::cin >> reply;

    } while (std::tolower(reply) == 'y');
}

// Using the continue statement to display ASCII character codes
import <iostream>;
import <format>;

#include <cctype>

void continue_statement()
{
    const auto header_format{ "{:^11}{:^11}{:^11}\n" };    // 3 cols., 11 wide, centered (^)
    const auto body_format{ "{0:^11}{0:^11X}{0:^11d}\n" }; // Print same argument three times

    std::cout << std::format(header_format, "Character", "Hexadecimal", "Decimal");

    // Output 7-bit ASCII characters and corresponding codes
    char ch{};
    do
    {
        if (!std::isprint(ch))  // If it's not printable...
            continue;             // ...skip this iteration
        std::cout << std::format(body_format, ch);
    } while (ch++ < 127);
}

// Sorting an array in ascending sequence - using an indefinite while loop
import <iostream>;
import <format>;

int indefinite_while()
{
    const size_t size{ 1000 };     // Array size
    double x[size]{};            // Stores data to be sorted
    size_t count{};              // Number of values in array

    while (true)
    {
        double input{};            // Temporary store for a value
        std::cout << "Enter a non-zero value, or 0 to end: ";
        std::cin >> input;
        if (input == 0)
            break;

        x[count] = input;

        if (++count == size)
        {
            std::cout << "Sorry, I can only store " << size << " values.\n";
            break;
        }
    }

    if (count == 0)
    {
        std::cout << "Nothing to sort..." << std::endl;
        return 0;
    }

    std::cout << "Starting sort..." << std::endl;

    while (true)
    {
        bool swapped{ false };    // Becomes true when not all values are in order
        for (size_t i{}; i < count - 1; ++i)
        {
            if (x[i] > x[i + 1])    // Out of order so swap them
            {
                const auto temp{ x[i] };
                x[i] = x[i + 1];
                x[i + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped)    // If there were no swaps
            break;         // ...all values are in order...
    }                  // ...otherwise, go round again.

    std::cout << "Your data in ascending sequence:\n";
    const size_t perline{ 10 };         // Number output per line
    size_t n{};                       // Number on current line
    for (size_t i{}; i < count; ++i)
    {
        std::cout << std::format("{:8.1f}", x[i]);
        if (++n == perline)              // When perline have been written...
        {
            std::cout << std::endl;        // Start a new line and...
            n = 0;                         // ...reset count on this line
        }
    }
    std::cout << std::endl;
}

// Classifying the letters in a C-style string
import <iostream>;

#include <cctype>

void c_styel_string()
{
    const int max_length{ 100 };   // Array size
    char text[max_length]{};     // Array to hold input string

    std::cout << "Enter a line of text:" << std::endl;

    // Read a line of characters including spaces
    std::cin.getline(text, max_length);
    std::cout << "You entered:\n" << text << std::endl;

    size_t vowels{};            // Count of vowels
    size_t consonants{};        // Count of consonants
    for (int i{}; text[i] != '\0'; i++)
    {
        if (std::isalpha(text[i]))         // If it is a letter...
        {
            switch (std::tolower(text[i]))
            {                                // ...check lowercase...
            case 'a': case 'e': case 'i': case 'o': case 'u':
                ++vowels;                    // ...it is a vowel
                break;

            default:
                ++consonants;                    // ...it is a consonant
            }
        }
    }
    std::cout << "Your input contained " << vowels << " vowels and "
        << consonants << " consonants." << std::endl;
}

// Working with strings in an array
import <iostream>;
import <array>; // for std::size()

void string_array()
{
    const size_t max_length{ 80 };      // Maximum string length (including \0)
    char stars[][max_length]{
                            "Fatty Arbuckle",  "Clara Bow",
                            "Lassie",          "Slim Pickens",
                            "Boris Karloff",   "Mae West",
                            "Oliver Hardy",    "Greta Garbo"
    };
    size_t choice{};

    std::cout << "Pick a lucky star! Enter a number between 1 and "
        << std::size(stars) << ": ";
    std::cin >> choice;

    if (choice >= 1 && choice <= std::size(stars))
    {
        std::cout << "Your lucky star is " << stars[choice - 1] << std::endl;
    }
    else
    {
        std::cout << "Sorry, you haven't got a lucky star." << std::endl;
    }
}

// Allocating an array at runtime
// This example does not work with some compilers (such as Visual C++)
// because dynamic arrays is not standard C++ (it is valid C though).
import <iostream>;
import <format>;

#ifdef _MSC_VER   // See Appendix A for an explanation of preprocessing macros
#error Visual Studio does not support variable length arrays (not standard C++)
#endif

void array_runtime()
{
    size_t count{};
    std::cout << "How many heights will you enter? ";
    std::cin >> count;
    int height[count];            // Create the array of count elements

    // Read the heights
    size_t entered{};
    while (entered < count)
    {
        std::cout << "Enter a height (in inches): ";
        std::cin >> height[entered];
        if (height[entered] > 0)    // Make sure value is positive
        {
            ++entered;
        }
        else
        {
            std::cout << "A height must be positive - try again.\n";
        }
    }

    // Calculate the sum of the heights
    unsigned int total{};
    for (size_t i{}; i < count; ++i)
    {
        total += height[i];
    }
    std::cout << std::format("The average height is {:.1f}\n",
        static_cast<float>(total) / count);
}

// Comparing array<> objects and plain arrays
import <iostream>;
import <array>;

void compare_array() 
{
    {
        std::cout << "First we try out the comparison operators for std::array<> objects:" << std::endl;

        std::array<double, 4> these{ 1.0, 2.0, 3.0, 4.0 };
        std::array<double, 4> those{ 1.0, 2.0, 3.0, 4.0 };
        std::array<double, 4> them{ 1.0, 1.0, 5.0, 5.0 };

        if (these == those) std::cout << "these and those are equal." << std::endl;
        if (those != them)  std::cout << "those and them are not equal." << std::endl;
        if (those > them)   std::cout << "those are greater than them." << std::endl;
        if (them < those)   std::cout << "them are less than those." << std::endl;
    }

    std::cout << std::endl;

    {
        std::cout << "Next we repeat exactly the same comparisons with plain C++ arrays:" << std::endl;
        double these[4]{ 1.0, 2.0, 3.0, 4.0 };
        double those[4]{ 1.0, 2.0, 3.0, 4.0 };
        double them[4]{ 1.0, 1.0, 5.0, 5.0 };

        if (these == those) std::cout << "these and those are equal." << std::endl;
        if (those != them)  std::cout << "those and them are not equal." << std::endl;
        if (those > them)   std::cout << "those are greater than them." << std::endl;
        if (them < those)   std::cout << "them are less than those." << std::endl;
    }

    /* The explanation of why this does not work as expected with plain arrays follows in Chapter 6 */
}

// Using array<T,N> to create Body Mass Index (BMI) table
// BMI = weight/(height*height)
// weight in kilograms, height in meters

import <iostream>;
import <format>;
import <array>;        // For array<T,N>

void array_ex()
{
    const unsigned min_wt{ 100 };     // Minimum weight in table (in pounds)
    const unsigned max_wt{ 250 };     // Maximum weight in table
    const unsigned wt_step{ 10 };
    const size_t wt_count{ 1 + (max_wt - min_wt) / wt_step };

    const unsigned min_ht{ 48 };      // Minimum height in table (inches)
    const unsigned max_ht{ 84 };      // Maximum height in table
    const unsigned ht_step{ 2 };
    const size_t ht_count{ 1 + (max_ht - min_ht) / ht_step };

    const double lbs_per_kg{ 2.2 };   // Pounds per kilogram
    const double ins_per_m{ 39.37 };  // Inches per meter
    std::array<unsigned, wt_count> weight_lbs{};
    std::array<unsigned, ht_count> height_ins{};

    // Create weights from 100lbs in steps of 10lbs
    for (unsigned i{}, w{ min_wt }; i < wt_count; w += wt_step, ++i)
    {
        weight_lbs[i] = w;
    }
    // Create heights from 48 inches in steps of 2 inches
    for (unsigned i{}, h{ min_ht }; h <= max_ht; h += ht_step)
    {
        height_ins.at(i++) = h;
    }
    // Output table headings
    std::cout << std::format("{:>8}", '|');
    for (auto w : weight_lbs)
        std::cout << std::format("{:^6}|", w);
    std::cout << std::endl;

    // Output line below headings
    for (unsigned i{ 1 }; i < wt_count; ++i)
        std::cout << "--------";
    std::cout << std::endl;

    const unsigned int inches_per_foot{ 12U };
    for (auto h : height_ins)
    {
        const unsigned feet{ h / inches_per_foot };
        const unsigned inches{ h % inches_per_foot };
        std::cout << std::format("{:2}'{:2}\" |", feet, inches);

        const double h_m{ h / ins_per_m };     // Height in meter
        for (auto w : weight_lbs)
        {
            const double w_kg = w / lbs_per_kg; // Weight in kilogram
            const double bmi = w_kg / (h_m * h_m);
            std::cout << std::format(" {:2.1f} |", bmi);
        }
        std::cout << std::endl;
    }
    // Output line below table
    for (size_t i{ 1 }; i < wt_count; ++i)
        std::cout << "--------";
    std::cout << "\nBMI from 18.5 to 24.9 is normal" << std::endl;
}

// Sorting an array in ascending sequence - using a vector<T> container
import <iostream>;
import <format>;
import <vector>;

void array_sort()
{
    std::vector<double> x;    // Stores data to be sorted

    while (true)
    {
        double input{};        // Temporary store for a value
        std::cout << "Enter a non-zero value, or 0 to end: ";
        std::cin >> input;
        if (input == 0)
            break;

        x.push_back(input);
    }

    if (x.empty())
    {
        std::cout << "Nothing to sort..." << std::endl;
        return 0;
    }

    std::cout << "Starting sort." << std::endl;

    while (true)
    {
        bool swapped{ false };   // Becomes true when not all values are in order
        for (size_t i{}; i < x.size() - 1; ++i)
        {
            if (x[i] > x[i + 1])   // Out of order so swap them
            {
                const auto temp{ x[i] };
                x[i] = x[i + 1];
                x[i + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped)   // If there were no swaps
            break;        // ...all values are in order...
    }                 // ...otherwise, go round again.

    std::cout << "Your data in ascending sequence:\n";
    const size_t perline{ 10 };   // Number output per line
    size_t n{};                 // Number on current line
    for (size_t i{}; i < x.size(); ++i)
    {
        std::cout << std::format("{:8.1f}", x[i]);
        if (++n == perline)        // When perline have been written...
        {
            std::cout << std::endl;  // Start a new line and...
            n = 0;                   // ...reset count on this line
        }
    }
    std::cout << std::endl;
}