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

Map* World::get_map()
{
	return current_map;
}

Player* World::get_player()
{
	return current_player;
}

void World::save_world(std::string filename)
{
	Saver* saver = new Saver();
	char flag = 0;
	std::cout << "Save as txt? y/n" << std::endl;
	std::cin >> flag;
	if (flag == 'y')
		saver = new Save_as_txt(saver);
	std::cout << "Save as dat? y/n" << std::endl;
	std::cin >> flag;
	if (flag == 'y')
		saver = new Save_as_dat(saver);
	std::cout << "Save as wrld? y/n" << std::endl;
	std::cin >> flag;
	if (flag == 'y')
		saver = new Save_as_wrld(saver);
	saver->save_world(filename);
}

