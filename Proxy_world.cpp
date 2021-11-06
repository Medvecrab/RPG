#include "Proxy_world.h"

void Proxy_world::log()
{
    std::string map_name = real_world->get_current_map_name();
    std::string player_name = real_world->get_current_player_name();
	//printf("\t[Map log]\nMap log started.\nCurrent map: %s\nCurrent player: %s", map_name, player_name);
    std::cout << "\t[Map log]\nMap log started.\nCurrent map: " << map_name << "\nCurrent player: " << player_name << std::endl;
}

Proxy_world::Proxy_world() {}
Proxy_world::~Proxy_world() {}
void Proxy_world::init_world(World* world)
{
	if (real_world != nullptr)
		delete real_world;
	real_world = world;
}

int Proxy_world::load_map(Map* map) 
{
    if (real_world == nullptr) {
        printf("Proxy world isn't initialized!\n");
        return -1;
    }
    int load_res = real_world->load_map(map);
    log();
    return load_res;
}

int Proxy_world::change_player(Player* player) 
{
    if (real_world == nullptr) {
        printf("Proxy world isn't initialized!\n");
        return -1;
    }
    int load_res = real_world->change_player(player);
    log();
    return load_res;
}