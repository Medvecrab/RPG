#pragma once
#include "Character.h"
class State
{
private:
	Character* cur_char;
public:
	virtual void interact();
};

