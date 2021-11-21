#include "Iterator.h"

Iterator::Iterator()
{

}

bool Iterator::has_next()
{
	return false;
}

Character* Iterator::get_next()
{
	if (this->has_next())
		return nullptr;
}