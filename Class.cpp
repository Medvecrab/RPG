#include "Class.h"

Class::Class(std::string base_desc)
{
	desc = base_desc;
}

void Class::add_ability()
{
	Class_ability* abil = new Class_ability(); //��� ���� �������� ��� ������� ���������� ���������� ������
	this->list_of_abilities.push_back(abil);
}

std::string Class::get_description()
{
	return desc;
}

void Class::scale_abilities()
{
	Ability_visitor* visitor = new Scaling_visitor(1.05, 1); //��� ��� ��������� "������", �� �� ����� � ����� ����������
	for (auto abil : list_of_abilities)
	{
		abil->accept_visitor(visitor);
	}
}


