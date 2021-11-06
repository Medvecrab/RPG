#include "World.h"

World::World()
{
	this->current_map = new Map("nomap");
	this->current_player = new Player("noplayer");
}

World::~World()
{
	
}

int World::load_map(Map* map)
{
	this->current_map = map;
	std::cout << "Map "<< map->get_name() << " successfully loaded!" << std::endl;
	return 0;
}

int World::change_player(Player* player)
{
	this->current_player = player;
	std::cout << "Player " << player->get_name() << " successfully changed!" << std::endl;
	return 0;
}


std::string World::get_current_map_name()
{
	if (current_map != nullptr)
	{
		return current_map->get_name();
	}
}

std::string World::get_current_player_name()
{
	if (current_player != nullptr)
	{
		return current_player->get_name();
	}
}