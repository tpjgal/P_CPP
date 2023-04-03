// Floating-point control in a for loop
#include <iostream>
#include <iomanip>

int main()
{
  const double pi{ 3.14159265 };       // The famous pi
  const size_t perline{ 3 };           // Outputs per line
  size_t linecount{};                  // Count of output lines
  for (double radius{ 0.2 }; radius <= 3.0; radius += 0.2)
  {
    std::cout << std::fixed << std::setprecision(2) << "  radius =" << std::setw(5)
              << radius << "  area =" << std::setw(6) << pi * radius * radius;
    if (perline == ++linecount)        // When perline outputs have been written...
    {
      std::cout << std::endl;          // ...start a new line...
      linecount = 0;                   // ...and reset the line counter
    }
  }
  std::cout << std::endl;
}


/*
Output:

  radius = 0.20  area =  0.13  radius = 0.40  area =  0.50  radius = 0.60  area =  1.13
  radius = 0.80  area =  2.01  radius = 1.00  area =  3.14  radius = 1.20  area =  4.52
  radius = 1.40  area =  6.16  radius = 1.60  area =  8.04  radius = 1.80  area = 10.18
  radius = 2.00  area = 12.57  radius = 2.20  area = 15.21  radius = 2.40  area = 18.10
  radius = 2.60  area = 21.24  radius = 2.80  area = 24.63
  
  */
  