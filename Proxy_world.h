#pragma once
#include "World.h"

class Proxy_world
{
private:
	World* real_world = nullptr;
	void log();
public:
	Proxy_world();
	~Proxy_world();
	void init_world(World* world);
	int load_map(Map* map);
	int change_player(Player* player);
};

