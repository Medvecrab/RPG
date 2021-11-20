#include "Class_ability.h"

Class_ability::Class_ability(std::string base_desc, int dmg, int heal)
{
	desc = base_desc;
	damage_formula = dmg;
	healing_formula = heal;
}

Class_ability::Class_ability()
{

}

void Class_ability::cast(Character* chr)
{
	chr->set_health(chr->get_health() - damage_formula);
	chr->set_health(chr->get_health() + healing_formula);
}

std::string Class_ability::get_description()
{
	return desc;
}