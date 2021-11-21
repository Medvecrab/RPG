#pragma once
#include "Environmental_object.h"
#include <vector>

class Compound_object : Environmental_object
{
private:
	std::vector<Environmental_object*> object_list;
public:
	void react() override;
	void add_env_obj(Environmental_object*);
	void remove_env_obj(int);
};

