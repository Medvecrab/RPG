#include "Four_classes.h"

void Physical_Melee::use_ability(Character* target, int i)
{
	//провер€ть дальность использовани€ способностей надо будет в самом персонаже.
	list_of_abilities[i]->cast(target);
}

Physical_Melee::Physical_Melee()
{
	desc = "‘изический рукопашный класс";
}

void Physical_Ranged::use_ability(Character* target, int i)
{
	list_of_abilities[i]->cast(target);
}

Physical_Ranged::Physical_Ranged()
{
	desc = "‘изический дальнобойный класс";
}

void Magical_Melee::use_ability(Character* target, int i)
{
	list_of_abilities[i]->cast(target);
}

Magical_Melee::Magical_Melee()
{
	desc = "ћагический рукопашный класс";
}

void Magical_Ranged::use_ability(Character* target, int i)
{
	list_of_abilities[i]->cast(target);
}


Magical_Ranged::Magical_Ranged()
{
	desc = "ћагический дальнобойный класс";
}
