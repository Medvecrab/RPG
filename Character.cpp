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

void Character::set_name(std::string new_name)
{
	name = new_name;
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

void Character::set_class(int choice, int choice2) //можно передавать класс и дальность сразу, костыль для builder
{
	std::cout << "Если вы хотите выбрать рукопашный класс, нажмите 1, если хотите выбрать дальнобойный класс, нажмите 2" << std::endl;
	if (choice == -1) //костыль для builder
		std::cin >> choice;
	if (choice == 1)
		factory = new Melee_factory();
	else
		factory = new Ranged_factory();
	std::cout << "Если вы хотите выбрать физический класс, нажмите 1, если хотите выбрать магический класс, нажмите 2" << std::endl;
	if (choice2 == -1) //костыль для builder
		std::cin >> choice2;
	if (choice2 == 1)
		game_class = factory->create_physical();
	else
		game_class = factory->create_magical();
	std::cout << "Класс создан" << std::endl;
}

void Character::check_health()
{
	if (health < 0)
		state = new Dead();
	else
		state = new Alive;
}

void Character::interact(Character* target)
{
	target->state->interact();
}
