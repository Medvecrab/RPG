#pragma once
#include "Class_ability.h"

class Damage_ability : public Class_ability
{
private:
	int damage_formula;
public:
	void cast(Character*) override;
	Damage_ability(int, float, std::string);
};

class Healing_ability : public Class_ability
{
private:
	int healing_formula;
public:
	void cast(Character*) override;
	Healing_ability(int, float, std::string);
};

class Status_ability : public Class_ability
{
private:
	std::string applied_status;
	int status_duration;
public:
	void cast(Character*) override;
	Status_ability(std::string, int, float, std::string);
};