#pragma once
#include "Prototype.h"
#include "Behaviours.h"
#include "Environmental_object.h"

class Unique_state_env_obj : public Prototype
{
private:
	std::pair<int, int> coordinates;
	bool collision;
	bool is_interactive;
	int health;
	std::string color;
	Environmental_object* env_obj;
	Behaviour* behaviour;
public:
	std::string name;
	Unique_state_env_obj(std::string, int hp, int x, int y);
	void set_env_obj(Environmental_object*);
	void react();
	void set_behaviour(std::string);
	Unique_state_env_obj* clone() override;
};

