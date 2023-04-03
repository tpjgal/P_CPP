#include "Product.h"
#include "Specfication.h"

bool ColorSpecification::is_satisfied(Product* item)
{
	return item->color == _color;
}

bool SizeSpecification::is_satisfied(Product* item)
{
	return item->size == _size;
}