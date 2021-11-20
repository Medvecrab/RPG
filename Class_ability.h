#pragma once
#include <string>
#include "Character.h"

class Class_ability
{
private:
	float damage_formula;
	float healing_formula;
	std::string applied_effects;
	std::string desc;
	float cast_range;
public:
	Class_ability();
	Class_ability(std::string, int, int);
	virtual void cast(Character*);
	virtual std::string get_description();
};

