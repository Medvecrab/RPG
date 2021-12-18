#pragma once
#include <string>
#include <vector>
#include "Environmental_object.h"
#include "Prototype.h"

class Unique_state_env_obj : public Prototype
{
private:
	std::string name;
	std::pair<int, int> coordinates;
	bool collision;
	bool is_interactive;
	int health;
	std::string color;
	Environmental_object* env_obj;
public:
	Unique_state_env_obj(std::string, int hp, int x, int y);
	void set_env_obj(Environmental_object*);
	void react();
	Prototype* clone() override;
};

