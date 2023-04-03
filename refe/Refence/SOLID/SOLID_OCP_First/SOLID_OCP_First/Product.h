#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

template<typename T>
struct Specification;

enum class Color
{
	Red,
	Green,
	Blue
};
enum class Size
{
	Small,
	Medium,
	Large
};

struct Product
{
	std::string name;
	Color       color;
	Size        size;
};

#endif  //PRODUCT_H

