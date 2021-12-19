#pragma once
#include "Iterable.h"
#include "NPC.h"
#include "Environmental_object.h"
#include "Unique_state_env_obj.h"
#include "Vector_iterator.h"
#include "NPC_pool.h"
#include <vector>

class Environment : Iterable
{
private:
	std::vector <std::pair<int,int>> spawn_points; //координаты, может как-то прикреплять их к неписям
	std::vector <Unique_state_env_obj*> env_objects; //потом заменить на Unique state
public:
	std::vector <NPC*> assigned_NPCs;
	NPC_pool* pool;
	void add_NPC();
	void spawn_NPCs();
	Iterator* init_iterator() override;
	void add_env_object(Unique_state_env_obj*);
	void relocate_spawn_point(int, int, int);
	Environment(NPC_pool*); //передаём пул НИП

};

