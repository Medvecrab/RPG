#include "Tester.h"

void Tester::test_delegate()
{
	Player* alive_player = new Player(100);
	Player* dead_player = new Player(0);
	std::cout << "Alive player" << std::endl;
	alive_player->save_character("player1.sv");
	std::cout << "Dead player" << std::endl;
	dead_player->save_character("player2.sv");
}

void Tester::test_proxy() 
{
	Proxy_world* p_world = new Proxy_world();
	Player* player = new Player("Alexei");
	Map* map = new Map("Russia");
	p_world->load_map(map);
	p_world->change_player(player);
	World* world = new World();
	p_world->init_world(world);
	p_world->load_map(map);
	p_world->change_player(player);
}