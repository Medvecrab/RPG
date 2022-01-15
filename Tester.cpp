#include "Tester.h"

void Tester::main_menu()
{
	World::get_instance("������ ����� ���"); //������� ����� ���, ������� ����� ����� ������������
	int choice;
	do
	{
		std::cout << "�������� ���� �� ������� ����: \n" << "1. ��������/�������������� ��������� ������ \n" << "2. ��������/�������������� ����� \n"
			<< "3. ��������� ������� ���\n" << "4. ����� �� ���������";
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
	World* current_world = World::get_instance("������ ����� ���");
	Player* current_player = current_world->get_player(); //��������� �������� ������
	int choice;
	std::cout << "�������� ���� �� ������� ����: \n" << "1. ������� ������ ��������� \n" << "2. ������������� ������������� ��������� \n" << "3. ��������� � ������� ���� \n";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		current_world->change_player(create_player()); //���� ��������� ���-������, ��� �������� ��������
		break;
	case 2:
		edit_player(current_player);
		current_world->change_player(current_player);
		break;
	case 3:
		return;
	default:
		break;
	}
}

Player* Tester::create_player()
{
	Player_director* director = new Player_director();
	int choice;
	std::cout << "�������� ���� �� ������� ����: \n" << "1. ������� ������������������ ����� \n" << "2. ������� ������������������ ����\n" 
		<< "3. ������� ������ ���������" << "4. ��������� � ������� ���� \n";
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
	int choice;
	int health;
	int resource;
	std::string name;
	int karma;
	do
		{
		std::cout << "�������� ���� �� ������� ����: \n" << "1. �������� �������� ��������� \n" << "2. �������� ������ ��������� \n"
			<< "3. �������� ��� ��������� \n" << "4. �������� ����� ��������� \n" << "5. ����� � ���������� ����";
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
	std::cout << "�������� ���� �� ������� ����: \n" << "1. ������� ����� ����� \n" << "2. ������������� ������������ ����� \n" 
		<< "3. �������� � ���������� �����" << "4. ��������� � ������� ���� \n";
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
}

void Tester::edit_map(Map* current_map)
{
	int choice;
	std::string name;
	int height;
	int width;
	do
	{
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
