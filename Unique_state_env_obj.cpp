#include "Unique_state_env_obj.h"

Unique_state_env_obj::Unique_state_env_obj(std::string new_name, int new_health, std::pair<int, int> new_coords)
{
	name = new_name;
	health = new_health;
	coordinates = new_coords;
}

void Unique_state_env_obj::react()
{

}