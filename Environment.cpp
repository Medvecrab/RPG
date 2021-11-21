#include "Environment.h"

void Environment::spawn_NPCs()
{
	//TODO: �������� ������� ��������� ��������
}

void Environment::add_NPC(NPC* npc)
{
	assigned_NPCs.push_back(npc);
}

Iterator* Environment::init_iterator()
{
	return new Vector_iterator(assigned_NPCs);
}

void Environment::add_env_object(Unique_state_env_obj* env_obj)
{
	env_objects.push_back(env_obj);
	std::cout << "Added ";
	env_obj->react();
	std::cout << std::endl;
}

void Environment::relocate_spawn_point(int x, int y, int index)
{
	spawn_points[index].first = x;
	spawn_points[index].second = y;
}