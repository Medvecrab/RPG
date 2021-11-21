#include "Tester.h"

/*void Tester::test_delegate() //тут будет тест потом на бридже
{
	Player* alive_player = new Player(100);
	Player* dead_player = new Player(0);
	std::cout << "Alive player" << std::endl;
	alive_player->save_character("player1.sv");
	std::cout << "Dead player" << std::endl;
	dead_player->save_character("player2.sv");
}*/

void Tester::test_proxy() //это работает
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

void Tester::test_adapter()
{
	Class_ability* first = new Class_ability("fireball", 50, 0);
	Global_ability* second = new Global_ability("firerain", 10, 0);
	Class_ability* adapt = new Adapter(second);
	Character* vitaly = new Character("Vitaly", 100);
	std::cout << "Name: " << vitaly->get_name() << ", Health: " << vitaly->get_health() << std::endl;
	first->cast(vitaly);
	std::cout << "Name: " << vitaly->get_name() << ", Health: " << vitaly->get_health() << std::endl;
	adapt->cast(vitaly);
	std::cout << "Name: " << vitaly->get_name() << ", Health: " << vitaly->get_health() << std::endl;
	//использует способность дважды, потому что пока что метод "найти всех НИП в поле зрения" написан криво.
}

void Tester::test_decorator()
{
	World* wrld = new World();
	wrld->save_world("file");
}

void Tester::test_composite()
{
	Primitive_object* first = new Primitive_object("rocky");
	Compound_object* comp = new Compound_object("wooden");
	comp->add_env_obj(new Primitive_object("golden"));
	comp->add_env_obj(new Primitive_object("golden"));
	comp->add_env_obj(new Compound_object("purse"));
	comp->add_env_obj(new Compound_object("hole"));
	comp->add_env_obj(new Compound_object("barrel"));
	first->react();
	comp->react();
}

void Tester::test_iterator()
{
	Environment* env = new Environment();
	env->add_NPC(new NPC("Sergey"));
	env->add_NPC(new NPC("Oleg"));
	Iterator* iter = env->init_iterator();
	while (iter->has_next())
	{
		std::cout << iter->get_next()->get_name() << std::endl;
	}
}

void Tester::test_bridge()
{
	Map* map = new Map();
	map->set_bg_generator(new Voronoi_diagramm());
	map->load_bg_image();
	map->set_bg_generator(new Perlin_noise());
	map->load_bg_image();
	map->set_bg_generator(new Loader());
	map->load_bg_image();
}

void Tester::test_flyweight()
{
	Primitive_object* prim = new Primitive_object("rocky");
	Unique_state_env_obj* exact_env_obj = new Unique_state_env_obj("rock", 200, 0, 0);
	Unique_state_env_obj* exact_env_obj_2 = new Unique_state_env_obj("boulder", 300, 50, 50);
	exact_env_obj->set_env_obj(prim);
	exact_env_obj_2->set_env_obj(prim);
	Unique_state_env_obj* exact_env_obj_3 = new Unique_state_env_obj("chest", 150, 150, 150);
	exact_env_obj_3->set_env_obj(new Compound_object("wooden"));
	exact_env_obj->react();
	exact_env_obj_2->react();
	exact_env_obj_3->react();
}

void Tester::test_facade()
{
	Map* map = new Map("Voronezh");
	map->set_env(new Environment());
	map->add_env_object(new Unique_state_env_obj("statue", 150, 40, 40));
	map->add_env_object(new Unique_state_env_obj("fountain", 50, 80, 80));
}