#pragma once
#include "Iterable.h"
#include "NPC.h"
#include "Environmental_object.h"
#include "Unique_state_env_obj.h"
#include "Vector_iterator.h"
#include <vector>

class Environment : Iterable
{
private:
	std::vector <NPC*> assigned_NPCs;
	std::vector <std::pair<int,int>> spawn_points; //координаты, может как-то прикреплять их к неписям
	std::vector <Unique_state_env_obj*> env_objects; //потом заменить на Unique state
public:
	void add_NPC(NPC*);
	void spawn_NPCs();
	Iterator* init_iterator() override;
	void add_env_object(Unique_state_env_obj*);
	void relocate_spawn_point(int, int, int);
};

