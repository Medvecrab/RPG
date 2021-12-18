#include "Concrete_factories.h"

//TODO: ������� ����������� ������� � ��������� ���� ��������, ����� ������ ���� ������ ������.

Class* Melee_factory::create_physical()
{
	return new Physical_Melee();
}

Class* Melee_factory::create_magical()
{
	return new Magical_Melee();
}

Class* Ranged_factory::create_physical()
{
	return new Physical_Ranged();
}

Class* Ranged_factory::create_magical()
{
	return new Magical_Ranged();
}
