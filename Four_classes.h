#pragma once

#include "Phys_Mag_Class.h"

class Physical_Melee : public Physical
{
public:
	const float preferred_range = 1;
	void use_ability(Character*, int) override;
	Physical_Melee();
};

class Physical_Ranged : public Physical
{
public:
	const float preferred_range = 10;
	void use_ability(Character*, int) override;
	Physical_Ranged();
};

class Magical_Melee : public Magical
{
public:
	const float preferred_range = 1;
	void use_ability(Character*, int) override;
	Magical_Melee();
};

class Magical_Ranged : public Magical
{
public:
	const float preferred_range = 10;
	void use_ability(Character*, int) override;
	Magical_Ranged();
};
