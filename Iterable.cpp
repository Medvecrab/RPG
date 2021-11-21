#include "Iterable.h"

Iterator* Iterable::init_iterator()
{
	return new Iterator();
}