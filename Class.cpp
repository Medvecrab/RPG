#include "Class.h"

Class::Class(std::string base_desc)
{
	desc = base_desc;
}

void Class::add_ability(Class_ability* abil)
{
	this->list_of_abilities.push_back(abil);
}

std::string Class::get_description()
{
	return desc;
}
