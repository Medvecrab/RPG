#pragma once
#include "Player.h"
#include "Map.h"
#include "Saver.h"
#include "Saver_decorator.h"
#include "Save_as.h"
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
	Map* get_map();
	Player* get_player();
	void save_world(std::string);
};

