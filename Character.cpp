#include "Character.h"

std::string Character::get_name()
{
	return name;
}

int Character::get_health()
{
	return health;
}

void Character::set_health(int set_health)
{
	health = set_health;
}

int Character::get_resource()
{
	return resource;
}

void Character::set_resource(int set_resource)
{
	resource = set_resource;
}