

#include <iostream>
#include "Includes/Relationships.h"
#include "Includes/Car/Car.h"
#include "Includes/Car/Engine.h"
#include "Includes/Logger/ConsoleLogger.h"
#include "Includes/Logger/ILogger.h"
#include "Includes/Reporting/Reporting.h"

/// \brief Dependency Inversion Principle.
/// \note Dependency injection
/// \example Report logger: depend on interfaces
void DipExample()
{
    std::cout << "DIP Dependency Inversion Principle\n";

    std::shared_ptr<ConsoleLogger> logger = std::make_shared<ConsoleLogger>();
    std::unique_ptr<Engine>        engine = std::make_unique<Engine>();

    std::shared_ptr<Car> car = std::make_shared<Car>(std::move(engine), logger);

    Reporting r(*logger);
    r.prepare_report();
    logger->Log("Log");

    std::cout << "End DIP\n";
}

/// \brief Dependency Inversion Principle.
/// \example Relationships: Depend on abstractions
void DipExample2()
{
    std::cout << "DIP Dependency Inversion Principle\n";

    Person parent{ "John" };
    Person child1{ "Chris" }, child2{ "Matt" };

    Relationships relationships;
    relationships.add_parent_and_child(parent, child1);
    relationships.add_parent_and_child(parent, child2);

    Research r(relationships);

    std::cout << "End DIP\n";
}
int main()
{
    DipExample();
    std::cout << "\n";
    DipExample2();
    std::cout << "\n";
}

