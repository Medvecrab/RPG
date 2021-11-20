#pragma once
#include <string>
#include "Character.h"
#include "Global_ability.h"
#include "World.h"
#include "Class_ability.h"

class Adapter : Class_ability
{
private:
	Global_ability* adaptable;
public:
	void cast(Character*) override;
	Adapter(Global_ability*);
	std::string get_description() override;
};

