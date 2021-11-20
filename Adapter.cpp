#include "Adapter.h"

Adapter::Adapter(Global_ability* glb_abil)
{
	adaptable = glb_abil;
}

void Adapter::cast(Character* chr)
{
	std::vector<Character*> chr_list = chr->get_visible_characters(); //TODO: сама функция пока возвращает список с самим объектом, потом переделаю
	chr_list.push_back(chr);
	adaptable->cast(chr_list);
}

std::string Adapter::get_description()
{
	return this->adaptable->get_description();
}