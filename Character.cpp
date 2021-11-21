#include "Character.h"

Character::Character()
{

}

Character::Character(std::string new_name, int hp)
{
	health = hp;
	name = new_name;
}

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

std::vector<Character*> Character::get_visible_characters()
{
	std::vector<Character*> visible_characters;
	visible_characters.push_back(this);
	return visible_characters;
}

void Character::spawn(int x, int y)
{
	std::cout << "Spawned at x = " << x << " , y = " << y << std::endl;
}