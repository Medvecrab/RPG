#include "Global_ability.h"

Global_ability::Global_ability(std::string base_desc, int dmg, int heal)
{
	desc = base_desc;
	damage_formula = dmg;
	healing_formula = heal;
}

void Global_ability::cast(std::vector<Character*> chr_list)
{
	for(auto chr : chr_list)
	{
		chr->set_health(chr->get_health() - damage_formula);
		chr->set_health(chr->get_health() + healing_formula);
	}
}

std::string Global_ability::get_description()
{
	return desc;
}