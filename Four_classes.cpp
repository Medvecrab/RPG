#include "Four_classes.h"

void Physical_Melee::use_ability(Character* target, Class_ability* ability)
{
	//��������� ��������� ������������� ������������ ���� ����� � ����� ���������.
	ability->cast(target);
}

Physical_Melee::Physical_Melee()
{
	desc = "���������� ���������� �����";
}

void Physical_Ranged::use_ability(Character* target, Class_ability* ability)
{
	ability->cast(target);
}

Physical_Ranged::Physical_Ranged()
{
	desc = "���������� ������������ �����";
}

void Magical_Melee::use_ability(Character* target, Class_ability* ability)
{
	ability->cast(target);
}

Magical_Melee::Magical_Melee()
{
	desc = "���������� ���������� �����";
}

void Magical_Ranged::use_ability(Character* target, Class_ability* ability)
{
	ability->cast(target);
}

Magical_Ranged::Magical_Ranged()
{
	desc = "���������� ������������ �����";
}