#pragma once
#include <string>
#include <iostream>
#include "Character.h"

class Class_ability
{
private:
	std::string desc;
	float cast_range;
public:
	Class_ability();
	Class_ability(float, std::string);
	virtual void cast(Character*);
	std::string get_description();
};

