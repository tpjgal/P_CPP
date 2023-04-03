#include <iostream>
#include <vector>
#include "Filter.h"
#include "Product.h"
#include "Specfication.h"

using std::endl;
/// \brief Open-Closed Principle.
/// \example DB Filter specific search
void OcpExample()
{
    std::cout << "OCP: Open-Closed Principle\n";

    Product apple{ "Apple", Color::Green, Size::Small };
    Product tree{ "Tree", Color::Green, Size::Large };
    Product house{ "House", Color::Blue, Size::Large };

    std::vector<Product*> all{ &apple, &tree, &house };

    BetterFilter bf;

    ColorSpecification green(Color::Green);

    auto green_things = bf.filter(all, green);
    for (auto& x : green_things)
    {
        std::cout << x->name << " is green" << endl;
    }

    std::cout << "OCP with composite specification\n";

    //  ColorSpecification        green(Color::Green);
    SizeSpecification         large(Size::Large);
    AndSpecification<Product> green_and_large{ large, green };

    auto big_green_things = bf.filter(all, green_and_large);
    for (auto& x : big_green_things)
    {
        std::cout << x->name << " is large and green" << endl;
    }

    // Tree is large and green
    std::cout << "End OCP\n";
}

int main()
{
    OcpExample();
    std::cout << "\n";
}

