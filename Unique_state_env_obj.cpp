#include "Unique_state_env_obj.h"

Unique_state_env_obj::Unique_state_env_obj(std::string new_name, int new_health, int x, int y)
{
	name = new_name;
	health = new_health;
	coordinates = std::make_pair(x, y);
}

void Unique_state_env_obj::set_env_obj(Environmental_object* new_env_obj)
{
	env_obj = new_env_obj;
}

void Unique_state_env_obj::react()
{
	std::cout << "I'm a " << name << " at (" << coordinates.first << "," << coordinates.second << ")" << std::endl;
	if (env_obj != nullptr)
		env_obj->react();
}