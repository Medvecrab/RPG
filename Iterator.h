#pragma once
#include "NPC.h"

class Iterator
{
public:
	Iterator();
	virtual bool has_next();
	virtual Character* get_next();
};

