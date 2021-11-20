#pragma once
#include "Character.h"

class Iterator
{
	virtual bool has_next();
	virtual Character* get_next();
};

