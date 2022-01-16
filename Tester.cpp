#include "Tester.h"

void Tester::main_menu()
{
	World::get_instance("������ ����� ���"); //������� ����� ���, ������� ����� ����� ������������
	int choice;
	do
	{
		system("cls");
		std::cout << "�������� ���� �� ������� ����: \n" << "1. ��������/�������������� ��������� ������ \n" << "2. ��������/�������������� ����� \n"
			<< "3. ��������� ������� ���\n" << "4. ����� �� ��������� \n";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			work_with_player();
			break;
		case 2:
			work_with_map();
			break;
		case 3:
			break;
		case 4:
			return;
		default:
			break;
		}
	} while (choice > 0 && choice < 5);
}

void Tester::work_with_player()
{
	//������� do while
	World* current_world = World::get_instance("������ ����� ���");
	Player* current_player = current_world->get_player(); //��������� �������� ������
	int choice;
	do
	{
		system("cls");
		std::cout << "�������� ���� �� ������� ����: \n" << "1. ������� ������ ��������� \n" << "2. ������������� ������������� ��������� \n"
			<< "3. �������� � ������� ������ \n" << "4. �������� ��������� ������������ \n" << "5. ��������� � ������� ���� \n";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			current_world->change_player(create_player()); //���� ��������� ���-������, ��� �������� ��������
			if (current_world->get_player() == nullptr)
			{
				Player_director* director = new Player_director();
				current_world->change_player(director->make_warrior()); //������ ������������ �����
			}
			break;
		case 2:
			edit_player(current_player);
			current_world->change_player(current_player);
			break;
		case 3:
			choose_class(current_player);
			break;
		case 4:
			add_abilities(current_player);
			break;
		case 5:
			return;
		default:
			break;
		}
	} while (choice > 0 && choice < 5);
}

Player* Tester::create_player()
{
	Player_director* director = new Player_director();
	int choice;
	system("cls");
	std::cout << "�������� ���� �� ������� ����: \n" << "1. ������� ������������������ ����� \n" << "2. ������� ������������������ ����\n" 
		<< "3. ������� ������ ��������� \n" << "4. ��������� � ������� ���� \n";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		return director->make_warrior();
	case 2:
		return director->make_mage();
	case 3:
		return director->make_custom();
	default:
		return nullptr;
	}
}

void Tester::edit_player(Player* input_player)
{
	if (input_player == nullptr)
		input_player = new Player("testplayer");
	int choice;
	int health;
	int resource;
	std::string name;
	int karma;
	do
	{
		system("cls");
		std::cout << "�������� ���� �� ������� ����: \n" << "1. �������� �������� ��������� \n" << "2. �������� ������ ��������� \n"
			<< "3. �������� ��� ��������� \n" << "4. �������� ����� ��������� \n" << "5. ��������� � ���������� ���� \n";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			std::cout << "������� ������������ �������� ��������� " << std::endl;
			std::cin >> health;
			input_player->set_health(health);
			break;
		case 2:
			std::cout << "������� ������������ �������� ������� ��������� " << std::endl;
			std::cin >> resource;
			input_player->set_resource(resource);
			break;
		case 3:
			std::cout << "������� ��� ��������� " << std::endl;
			std::cin >> name;
			input_player->set_name(name);
			break;
		case 4:
			std::cout << "������� ���� ����� ��������� " << std::endl;
			std::cin >> karma;
			input_player->karma_points = karma;
			break;
		case 5:
			return;
		default:
			break;
		}
	} while (choice > 0 && choice < 5);
}

void Tester::work_with_map()
{
	World* current_world = World::get_instance("������ ����� ���");
	Map* current_map = current_world->get_map(); //��������� ������� �����
	int choice;
	do
	{
		system("cls");
		std::cout << "�������� ���� �� ������� ����: \n" << "1. ������� ����� ����� \n" << "2. ������������� ������������ ����� \n"
			<< "3. �������� � ���������� ����� \n" << "4. ��������� � ������� ���� \n";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			current_world->load_map(new Map()); //��� ������ �������� ������ �����, ������� ���� ����� ��������
			break;
		case 2:
			edit_map(current_map);
			current_world->load_map(current_map);
			break;
		case 3:
			//������ � ���������� �����
			work_with_map_env(current_map);
			break;
		case 4:
			return;
		default:
			break;
		}
	} while (choice > 0 && choice < 4);
}

void Tester::edit_map(Map* current_map)
{
	int choice;
	std::string name;
	int height;
	int width;
	do
	{
		system("cls");
		std::cout << "�������� ���� �� ������� ����: \n" << "1. �������� �������� ����� \n" << "2. �������� ������ ����� \n"
			<< "3. �������� ������ ����� \n" << "4. �������� ��������� ������� ���� � ������������� ����� ��� \n" << "5. ��������� � ������� ���� \n";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			std::cout << "������� �������� ����� " << std::endl;
			std::cin >> name;
			current_map->name = name;
			break;
		case 2:
			std::cout << "������� ������ ����� " << std::endl;
			std::cin >> height;
			current_map->height = height;
			break;
		case 3:
			std::cout << "������� ������ ����� " << std::endl;
			std::cin >> width;
			current_map->width = width;
			break;
		case 4:
			//���� ������ �� ������
			break;
		case 5:
			return;
		default:
			break;
		}
	} while (choice > 0 && choice < 5);
}

void Tester::work_with_map_env(Map* current_map)
{
	Environment* current_environment = current_map->get_env();
	int npc_amount = 10; //����� ���-������ ����������
	if (current_environment == nullptr) //����� �������� � ������ ����� ���������
	{
		current_environment = new Environment(new NPC_pool(npc_amount));
	}
	int choice;
	Unique_state_env_obj* env_obj;
	NPC* new_npc;
	NPC_pool* npc_pool;
	do
	{
		system("cls");
		std::cout << "�������� ���� �� ������� ����: \n" << "1. �������� ����� ������� ��������� \n" << "2. �������� ������ ��� �� ���� � ��������� \n"
			<< "3. ��������� � ������� ���� \n";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			env_obj = create_env_obj();
			if (env_obj->coordinates.first >= current_map->width) env_obj->coordinates.first = current_map->width - 1;
			if (env_obj->coordinates.second >= current_map->height) env_obj->coordinates.second = current_map->height - 1;
			current_environment->add_env_object(env_obj);
			break;
		case 2:
			current_environment->add_NPC(); //��������� �� ����
			break;
		case 3:
			return;
		default:
			break;
		}
	} while (choice > 0 && choice < 3);
}

Unique_state_env_obj* Tester::create_env_obj() //���� ������� �� �������� ���
{
	Unique_state_env_obj* result;
	int choice;
	std::string name = "";
	int x = 0;
	int y = 0;
	int health = 10;
	do
	{
		system("cls");
		std::cout << "�������� ���� �� ������� ����: \n" << "1. ������ �������� ������� \n" << "2. ������ ���������� x ������� \n"
			<< "3. ������ ���������� y ������� \n" << "4. ������ �������� ������� \n" << "5. ��������� � ��������� � ������� ���� \n";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			std::cout << "������� �������� ������� " << std::endl;
			std::cin >> name;
			break;
		case 2:
			std::cout << "������� ���������� x ������� " << std::endl;
			std::cin >> x;
			if (x < 0) x = 0;
			break;
		case 3:
			std::cout << "������� ���������� y ������� " << std::endl;
			std::cin >> y;
			if (y < 0) y = 0;
			break;
		case 4:
			std::cout << "������� �������� ������� " << std::endl;
			std::cin >> health;
			break;
		case 5:
			result = new Unique_state_env_obj(name, health, x, y);
			result->set_behaviour("inactive"); //�������
			return result;
		default:
			break;
		}
	} while (choice > 0 && choice < 5);
}

void Tester::choose_class(Player* current_player)
{
	bool isMagical =  false;
	char choice;
	std::cout << "�� ������ ������� ����������� ���������? y/n: \n";
	std::cin >> choice;
	if (choice == 'y')
	{
		current_player->factory = new Melee_factory();
	}
	else
	{
		current_player->factory = new Ranged_factory();
	}
	std::cout << "�� ������ ������� ����������� ���������? y/n: \n";
	std::cin >> choice;
	if (choice == 'y')
		isMagical = true;
	current_player->set_class(isMagical);
}

void Tester::add_abilities(Player* current_player)
{
	int choice;
	Ability_creator* creator;
	int damage;
	int healing;
	std::string status_name;
	int status_duration;
	if (current_player->game_class == nullptr)
		choose_class(current_player);
	float range = current_player->game_class->preferred_range;
	do
	{
		system("cls");
		std::cout << "�������� ���� �� ������� ����: \n" << "1. �������� ����� �����������, ��������� ���� \n" << "2. �������� ����� ���������� ����������� \n"
			<< "3. �������� ����� �����������, ������������� ��������� ������ \n" << "4. ��������� � ������� ���� \n";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			std::cout << "������� ���������� �����, ���������� ������������ ";
			std::cin >> damage;
			creator = new Damage_ability_creator(damage);
			current_player->game_class->add_ability(creator->create_ability(range, "damage " + std::to_string(damage)));
			break;
		case 2:
			std::cout << "������� ���������� ��������, ������������������ ������������ ";
			std::cin >> healing;
			creator = new Healing_ability_creator(healing);
			current_player->game_class->add_ability(creator->create_ability(range, "healing " + std::to_string(healing)));
			break;
		case 3:
			std::cout << "������� �������� ���������� �������, �������������� ������������ ";
			std::cin >> status_name;
			std::cout << "������� ������������ ���������� �������, �������������� ������������ ";
			std::cin >> status_duration;
			creator = new Status_ability_creator(status_name, status_duration);
			current_player->game_class->add_ability(creator->create_ability(range, "status " + status_name));
			break;
		case 4:
			return;
		default:
			break;
		}
	} while (choice > 0 && choice < 3);
}
