#pragma once
#include "State.h"
class Alive : public State
{
	void interact() override;
};

class Dead : public State
{
	void interact() override;
};

