#pragma once
#include "Abilities.h"

class Ability_visitor
{
public:
	virtual void visit_damage(Damage_ability*);
	virtual void visit_healing(Healing_ability*);
	virtual void visit_status(Status_ability*);
};

