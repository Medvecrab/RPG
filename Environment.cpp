#include "Environment.h"

void Environment::spawn_NPCs()
{
	//TODO: спавнить неписей используя итератор
}

Iterator* Environment::init_iterator()
{
	return new Vector_iterator(assigned_NPCs);
}

void Environment::add_env_object(Environmental_object* env_obj)
{
	env_objects.push_back(env_obj);
}

void Environment::relocate_spawn_point(int x, int y, int index)
{
	spawn_points[index].first = x;
	spawn_points[index].second = y;
}