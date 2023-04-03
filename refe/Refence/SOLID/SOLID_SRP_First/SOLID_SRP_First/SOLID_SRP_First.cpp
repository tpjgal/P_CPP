#include <iostream>
#include "Journal.h"
#include "PersistenceManager.h"

/// \brief Single Responsibility Principle.
/// \example Journal & save_file
void SrpExample()
{
    std::cout << "SRP: Single Responsibility Principle\n";

    Journal journal{ "My Diary" };
    journal.add("Dear Diary");
    journal.add("I cried today");
    journal.add("I ate a bug");

    PersistenceManager::save(journal, "../Journal.txt");
    PersistenceManager::read("../Journal.txt");

    std::cout << "End SRP\n";
}

int main()
{
    SrpExample();
    std::cout << "\n";
}

