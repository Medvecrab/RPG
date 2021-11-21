#include "Tester.h"

/*void Tester::test_delegate() //��� ����� ���� ����� �� ������
{
	Player* alive_player = new Player(100);
	Player* dead_player = new Player(0);
	std::cout << "Alive player" << std::endl;
	alive_player->save_character("player1.sv");
	std::cout << "Dead player" << std::endl;
	dead_player->save_character("player2.sv");
}*/

void Tester::test_proxy() //��� ��������
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
	//���������� ����������� ������, ������ ��� ���� ��� ����� "����� ���� ��� � ���� ������" ������� �����.
}

void Tester::test_decorator()
{
	World* wrld = new World();
	wrld->save_world("file");
}

void Tester::test_composite()
{
	Primitive_object* first = new Primitive_object();
	Compound_object* comp = new Compound_object();
	comp->add_env_obj(new Primitive_object());
	comp->add_env_obj(new Primitive_object());
	comp->add_env_obj(new Compound_object());
	comp->add_env_obj(new Compound_object());
	comp->add_env_obj(new Compound_object());
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