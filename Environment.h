#pragma once
#include "Iterable.h"
#include "NPC.h"
#include "Environmental_object.h"
#include "Vector_iterator.h"
#include <vector>

class Environment : Iterable
{
private:
	std::vector <NPC*> assigned_NPCs;
	std::vector <std::pair<int,int>> spawn_points; //координаты, может как-то прикреплять их к неписям
	std::vector <Environmental_object*> env_objects; //потом заменить на Unique state
public:
	void spawn_NPCs();
	Iterator* init_iterator() override;
	void add_env_object(Environmental_object*);
	void relocate_spawn_point(int, int, int);
};

