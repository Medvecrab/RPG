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
	World* world = new World("new world");
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

void Tester::test_factory()
{
	Ability_creator* creator;
	Class* lass = new Class();
	NPC* target = new NPC("owchie");
	creator = new Damage_ability_creator(10);
	lass->add_ability(creator->create_ability(5, "test damage"));
	creator = new Healing_ability_creator(10);
	lass->add_ability(creator->create_ability(5, "test healing"));
	creator = new Status_ability_creator("stun", 10);
	lass->add_ability(creator->create_ability(5, "test status"));
	for (int i = 0; i < lass->list_of_abilities.size(); i++)
	{
		lass->use_ability(target, i);
	}
}

void Tester::test_abstract_factory()
{
	Character* test = new Character();
	test->set_class(-1,-1);
}

void Tester::test_singleton()
{
	World* new_world;
	new_world = new_world->get_instance("brave new world");
	std::cout << new_world->name << std::endl;
	new_world = new_world->get_instance("old world");
	std::cout << new_world->name << std::endl;
}

void Tester::test_prototype()
{
	Unique_state_env_obj* env_obj = new Unique_state_env_obj("rock", 100, 10, 10);
	Unique_state_env_obj* new_obj = new Unique_state_env_obj("door", 200, 0, 0);
	std::cout << "Первый объект: " << env_obj->name << "; Второй объект: " << new_obj->name << std::endl;
	new_obj = env_obj->clone();
	std::cout << "Первый объект: " << env_obj->name << "; Второй объект: " << new_obj->name << std::endl;
 }

void Tester::test_builder()
{
	World* new_world;
	new_world = new_world->get_instance("brave new world");
	Player_director* direct = new Player_director();
	Player* tester = direct->make_warrior();
	new_world->change_player(tester);
	tester = direct->make_mage();
	new_world->change_player(tester);
	tester = direct->make_custom();
	new_world->change_player(tester);
}

void Tester::test_multiton()
{
	World* new_world;
	new_world = new_world->get_instance("brave new world");
	new_world->set_difficulty(EASY, "babymode");
	new_world->set_difficulty(MEDIUM, "let the games begin");
	new_world->set_difficulty(HARD, "ULTRA NIGHTMARE");
	new_world->set_difficulty(EASY, "game journalist");
}

void Tester::test_object_pool()
{
	NPC_pool* pool = new NPC_pool(3);
	Environment* env = new Environment(pool);
	env->add_NPC();
	env->add_NPC();
	env->add_NPC();
	env->add_NPC();
	std::cout << env->assigned_NPCs[0]->get_name() << std::endl;
	std::cout << env->assigned_NPCs[1]->get_name() << std::endl;
	std::cout << env->assigned_NPCs[2]->get_name() << std::endl;
	std::cout << env->assigned_NPCs[3] << std::endl; //вывели nullptr
	pool->free_NPC(env->assigned_NPCs[2]); //освобождаем последнего НИП
	std::cout << pool->get_NPC()->get_name() << std::endl;
}

void Tester::test_state()
{
	Character* target = new Character("target", 100);
	Character* interracter = new Character("interracter", 100);
	target->check_health();
	interracter->interact(target);
	target->set_health(0);
	target->check_health();
	interracter->interact(target);
}

void Tester::test_memento()
{
	Map* map = new Map("barnaul");
	Map_history* history = new Map_history(map);
	history->save_map();
	map->name = "new_barnaul";
	history->save_map();
	history->get_history();
	history->restore_snapshot(0);
	std::cout << "Восстановлен снимок карты, название карты " << map->name << std::endl;
}

void Tester::test_strategy()
{
	test_bridge(); // первая стратегия, потом вторая стратегия (в отчётах и комментариях упоминал, почему две)
	Unique_state_env_obj* obj = new Unique_state_env_obj("chest", 400, 10, 10);
	obj->set_behaviour("active");
	obj->react();
	obj->set_behaviour("inactive");
	obj->react();
	obj->set_behaviour("destroyed");
	obj->react();
}

void Tester::test_visitor_and_observer()
{
	//тут здоровье NPC становится 0, он "умирает", поэтому надо проскалировать способности
	Ability_creator* creator;
	Class* lass = new Class();
	NPC* target = new NPC("owchie");
	creator = new Damage_ability_creator(10);
	lass->add_ability(creator->create_ability(5, "test damage"));
	creator = new Healing_ability_creator(10);
	lass->add_ability(creator->create_ability(5, "test healing"));
	creator = new Status_ability_creator("stun", 10);
	lass->add_ability(creator->create_ability(5, "test status"));
	for (int i = 0; i < lass->list_of_abilities.size(); i++)
	{
		lass->use_ability(target, i);
	}
	Publisher* publisher = new Publisher();
	publisher->subscribe(lass);
	publisher->notify_subscribers(); //там внутри вызывается scale для всех подписчиков, а это реализовано через visitor
	for (int i = 0; i < lass->list_of_abilities.size(); i++)
	{
		lass->use_ability(target, i);
	}
	publisher->unsubscribe(0);
	publisher->notify_subscribers();
	for (int i = 0; i < lass->list_of_abilities.size(); i++)
	{
		lass->use_ability(target, i);
	}
}
