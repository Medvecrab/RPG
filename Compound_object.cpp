#include "Compound_object.h"

void Compound_object::react()
{

}

void Compound_object::add_env_obj(Enivironmental_object* obj)
{
	object_list.push_back(obj);
}

void Compound_object::remove_env_obj(int pos)
{
	object_list.erase(object_list.begin() + pos);
}