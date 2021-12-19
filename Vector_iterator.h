#pragma once
#include "Iterator.h"

class Vector_iterator : public Iterator
{
private:
	int index;
	std::vector<NPC*> iterable_vector;
public:
	Vector_iterator(std::vector<NPC*>);
	bool has_next() override;
	Character* get_next() override;
};

