#pragma once

import <iostream>;
import <format>;


// Comparing data values
void compare_data_value()
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


// Comparing data values (output using std::format())

import <format>;

void compare_data_Value()
{
    char first{};      // Stores the first character
    char second{};     // Stores the second character

    std::cout << "Enter a character: ";
    std::cin >> first;

    std::cout << "Enter a second character: ";
    std::cin >> second;

    std::cout << std::format("The value of the expression {} < {} is {}\n",
        first, second, first < second);
    std::cout << std::format("The value of the expression {} == {} is {}\n",
        first, second, first == second);
}


// Three-way comparison of integers
import <compare>;  // Required when using operator <=> (even for fundamental types)
import <format>;


void threewaycompar_integer()
{
    std::cout << "Please enter a number: ";

    int value;
    std::cin >> value;

    std::strong_ordering ordering{ value <=> 0 };

    std::cout << std::format("value < 0: {}\n", ordering == std::strong_ordering::less);
    std::cout << std::format("value > 0: {}\n", ordering == std::strong_ordering::greater);
    std::cout << std::format("value == 0: {}\n", ordering == std::strong_ordering::equal);
}

// / Using the std::isupper() / islower() character classification functions


#include <cctype>

int isupper_islower()
{
    char letter{};                      // Store input here
    std::cout << "Enter a letter: ";     // Prompt for the input
    std::cin >> letter;

    if (std::isupper(letter))
    {
        std::cout << "You entered an uppercase letter." << std::endl;
        return 0;
    }

    if (std::islower(letter))
    {
        std::cout << "You entered a lowercase letter." << std::endl;
        return 0;
    }

    std::cout << "You did not enter a letter." << std::endl;
}

// Using the if-else statement

void ifelse_statement()
{
    long number{};      // Stores input
    std::cout << "Enter an integer less than 2 billion: ";
    std::cin >> number;

    if (number % 2) // Test remainder after division by 2
    { // Here if remainder is 1
        std::cout << "Your number is odd." << std::endl;
    }
    else
    { // Here if remainder is 0
        std::cout << "Your number is even." << std::endl;
    }
}


// Combining logical operators for loan approval


void logical_operator()
{
    int age{};                  // Age of the prospective borrower
    int income{};               // Income of the prospective borrower
    int balance{};              // Current bank balance

    // Get the basic data for assessing the loan
    std::cout << "Please enter your age in years: ";
    std::cin >> age;
    std::cout << "Please enter your annual income in dollars: ";
    std::cin >> income;
    std::cout << "What is your current account balance in dollars: ";
    std::cin >> balance;

    // We only lend to people who are at least 21 years of age,
    // who make over $25,000 per year,
    // or have over $100,000 in their account, or both.
    if (age >= 21 && (income > 25'000 || balance > 100'000))
    {
        // OK, you are good for the loan - but how much?
        // This will be the lesser of twice income and half balance
        int loan{};               // Stores maximum loan amount
        if (2 * income < balance / 2)
        {
            loan = 2 * income;
        }
        else
        {
            loan = balance / 2;
        }
        std::cout << "\nYou can borrow up to $" << loan << std::endl;
    }
    else     // No loan for you...
    {
        std::cout << "\nUnfortunately, you don't qualify for a loan." << std::endl;
    }
}


// Using the switch statement


void switch_statement()
{
    std::cout << "Your electronic recipe book is at your service.\n"
        << "You can choose from the following delicious dishes:\n"
        << "1. Boiled eggs\n"
        << "2. Fried eggs\n"
        << "3. Scrambled eggs\n"
        << "4. Coddled eggs\n\n"
        << "Enter your selection number: ";

    int choice{};  // Stores selection value
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        std::cout << "Boil some eggs." << std::endl;
        break;
    case 2:
        std::cout << "Fry some eggs." << std::endl;
        break;
    case 3:
        std::cout << "Scramble some eggs." << std::endl;
        break;
    case 4:
        std::cout << "Coddle some eggs." << std::endl;
        break;
    default:
        std::cout << "You entered a wrong number - try raw eggs." << std::endl;
    }
}

// Multiple case actions


#include <cctype>

void multiple_case_action()
{
    char letter{};
    std::cout << "Enter a letter: ";
    std::cin >> letter;

    if (std::isalpha(letter))
    {
        switch (std::tolower(letter))
        {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            std::cout << "You entered a vowel." << std::endl;
            break;
        default:
            std::cout << "You entered a consonant." << std::endl;
            break;
        }
    }
    else
    {
        std::cout << "You did not enter a letter." << std::endl;
    }
}

// Using a return statement to exit a switch statement


#include <cctype>

void switch_return()
{
    char letter{};
    std::cout << "Enter a letter: ";
    std::cin >> letter;

    if (std::isalpha(letter))
    {
        switch (std::tolower(letter))
        {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            std::cout << "You entered a vowel." << std::endl;
            return 0;                               // Ends the program
        }

        // We did not exit main() in the above switch, so letter is not a vowel:
        std::cout << "You entered a consonant." << std::endl;
    }
    else
    {
        std::cout << "You did not enter a letter." << std::endl;
    }
}