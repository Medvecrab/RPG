#include "Vector_iterator.h"

Vector_iterator::Vector_iterator(std::vector<NPC*> input)
{
	index = 0;
	iterable_vector = input;
}

bool Vector_iterator::has_next()
{
	if (index < iterable_vector.size())
		return true;
	else
		return false;
}

Character* Vector_iterator::get_next()
{
	if (this->has_next())
		return iterable_vector[index++];
}