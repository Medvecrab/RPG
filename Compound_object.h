#pragma once
#include "Environmental_object.h"
#include <vector>

class Compound_object : Enivironmental_object
{
private:
	std::vector<Enivironmental_object*> object_list;
public:
	void react() override;
	void add_env_obj(Enivironmental_object*);
	void remove_env_obj(int);
};

