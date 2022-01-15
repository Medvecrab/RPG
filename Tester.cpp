#include "Tester.h"

void Tester::main_menu()
{
	World::get_instance("Дивный новый мир"); //создали новый мир, которым будем везде пользоваться
	int choice;
	do
	{
		std::cout << "Выберите один из пунктов меню: \n" << "1. Создание/редактирование персонажа игрока \n" << "2. Создание/редактирование карты \n"
			<< "3. Сохранить текущий мир\n" << "4. Выйти из программы";
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
	World* current_world = World::get_instance("Дивный новый мир");
	Player* current_player = current_world->get_player(); //сохранили текущего игрока
	int choice;
	std::cout << "Выберите один из пунктов меню: \n" << "1. Создать нового персонажа \n" << "2. Редактировать существующего персонажа \n" << "3. Вернуться в прошлое меню \n";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		current_world->change_player(create_player()); //надо проверять где-нибудь, что персонаж создался
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
	std::cout << "Выберите один из пунктов меню: \n" << "1. Создать прегенерированного воина \n" << "2. Создать прегенерированного мага\n" 
		<< "3. Создать своего персонажа" << "4. Вернуться в прошлое меню \n";
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
		std::cout << "Выберите один из пунктов меню: \n" << "1. Изменить здоровье персонажа \n" << "2. Изменить ресурс персонажа \n"
			<< "3. Изменить имя персонажа \n" << "4. Изменить карму персонажа \n" << "5. Выйти в предыдущее меню";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			std::cout << "Введите максимальное здоровье персонажа " << std::endl;
			std::cin >> health;
			input_player->set_health(health);
			break;
		case 2:
			std::cout << "Введите максимальное значение ресурса персонажа " << std::endl;
			std::cin >> resource;
			input_player->set_resource(resource);
			break;
		case 3:
			std::cout << "Введите имя персонажа " << std::endl;
			std::cin >> name;
			input_player->set_name(name);
			break;
		case 4:
			std::cout << "Введите очки кармы персонажа " << std::endl;
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
	World* current_world = World::get_instance("Дивный новый мир");
	Map* current_map = current_world->get_map(); //сохранили текущую карту
	int choice;
	std::cout << "Выберите один из пунктов меню: \n" << "1. Создать новую карту \n" << "2. Редактировать существующую карту \n" 
		<< "3. Работать с окружением карты" << "4. Вернуться в прошлое меню \n";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		current_world->load_map(new Map()); //тут просто создаётся пустая карта, которую надо потом редачить
		break;
	case 2:
		edit_map(current_map);
		current_world->load_map(current_map);
		break;
	case 3:
		//работа с окружением карты
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
		std::cout << "Выберите один из пунктов меню: \n" << "1. Изменить название карты \n" << "2. Изменить высоту карты \n"
			<< "3. Изменить ширину карты \n" << "4. Изменить генератор заднего фона и сгенерировать новый фон \n" << "5. Вернуться в прошлое меню \n";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			std::cout << "Введите название карты " << std::endl;
			std::cin >> name;
			current_map->name = name;
			break;
		case 2:
			std::cout << "Введите высоту карты " << std::endl;
			std::cin >> height;
			current_map->height = height;
			break;
		case 3:
			std::cout << "Введите ширину карты " << std::endl;
			std::cin >> width;
			current_map->width = width;
			break;
		case 4:
			//пока ничего не делает
			break;
		case 5:
			return;
		default:
			break;
		}
	} while (choice > 0 && choice < 5);
}
