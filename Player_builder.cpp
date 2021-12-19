#include "Player_builder.h"

Player_builder::Player_builder()
{
	result = new Player();
}

void Player_builder::build_health(int health)
{
	result->set_health(health);
}

void Player_builder::build_resource(int resource)
{
	result->set_resource(resource);
}

void Player_builder::build_karma_points(int karma)
{
	result->karma_points = karma;
}

void Player_builder::build_name(std::string name)
{
	result->set_name(name);
}

void Player_builder::build_class(int choice1, int choice2)
{
	result->set_class(choice1, choice2);
}

/*void Player_builder::build()
{
	std::cout << "Хотите установить здоровье персонажа? y/n" << std::endl;
	char ans;
	std::cin >> ans;
	if (ans == 'y')
	{
		std::cout << "Введите максимальное здоровье персонажа" << std::endl;
		int health;
		std::cin >> health;
		build_health(health);
	}
}

void Player_builder::reset()
{
	result = new Player();
}*/

Player* Player_builder::get_player()
{
	return result;
}
