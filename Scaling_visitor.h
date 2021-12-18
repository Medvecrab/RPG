#pragma once
#include "Ability_visitor.h"
#include <math.h>
class Scaling_visitor : public Ability_visitor
{
public:
	float formula_multiplier;
	int status_extender;
	virtual void visit_damage(Damage_ability*) override;
	virtual void visit_healing(Healing_ability*) override;
	virtual void visit_status(Status_ability*) override;
	Scaling_visitor(float, int);
};

