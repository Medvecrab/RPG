#pragma once
#include <string>
#include <vector>
#include "Character.h"

class Global_ability
{
private:
	float damage_formula;
	float healing_formula;
	std::string applied_effects;
	std::string desc;
public:
	Global_ability(std::string, int, int);
	void cast(std::vector<Character*>);
	std::string get_description();
};


