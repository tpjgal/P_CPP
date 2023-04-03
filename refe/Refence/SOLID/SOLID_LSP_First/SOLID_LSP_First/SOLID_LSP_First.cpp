#include <iostream>
#include "Rectangle.h" 

/// \brief Liskov Substitution Principle.
/// \example square !: rectangle. Factory instead
void LspExample()
{
    std::cout << "LSP Liskov Substitution Principle\n";

    Rectangle square = RectangleFactory::create_square(5);
    Rectangle rectangle = RectangleFactory::create_rectangle(2, 3);

    if (rectangle.is_square())
    {
        std::cout << "rectangle is square\n";
    }
    else
    {
        std::cout << "rectangle is not square\n";
    }
    if (square.is_square())
    {
        std::cout << "square is square\n";
    }
    else
    {
        std::cout << "square is not square\n";
    }

    std::cout << "Square size is: " << square.get_height() << "\n";
    std::cout << "Square area is: " << square.area() << "\n";
    std::cout << "Rectangle height is: " << rectangle.get_height() << "\n";
    std::cout << "Rectangle width is: " << rectangle.get_width() << "\n";
    rectangle.set_width(4);
    std::cout << "Rectangle new width is: " << rectangle.get_width() << "\n";
    rectangle.set_height(6);
    std::cout << "Rectangle new height is: " << rectangle.get_height() << "\n";

    std::cout << "End LSP \n";
}
int main()
{
    LspExample();
    std::cout << "\n";
}

