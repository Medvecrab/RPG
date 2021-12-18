#include "Scaling_visitor.h"

void Scaling_visitor::visit_damage(Damage_ability* abil)
{
	abil->damage_formula = std::round(abil->damage_formula * formula_multiplier);
}
 
void Scaling_visitor::visit_healing(Healing_ability* abil)
{
	abil->healing_formula = std::round(abil->healing_formula * formula_multiplier);
}

void Scaling_visitor::visit_status(Status_ability* abil)
{
	abil->status_duration = abil->status_duration + status_extender;
}
