//
// Created by juan.castellanos on 10/01/20.
//

#include "SRP/Journal.h"
#include "SRP/PersistenceManager.hpp"

void Journal::add(const string& entry)
{
  static int count = 1;
  entries.push_back(std::to_string(count++) + ": " + entry);
}
