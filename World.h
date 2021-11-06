#pragma once
#include "Player.h"
#include "Map.h"
#include <string>
#include <iostream>

class World
{
private: 
	Player* current_player;
	Map* current_map;
public:
	World();
	~World();
	int load_map(Map* map);
	int change_player(Player* player);
	std::string get_current_map_name();
	std::string get_current_player_name();
};

