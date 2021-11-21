#include "Map.h"

std::string Map::get_name()
{
	return name;
}

Environment* Map::get_env()
{
	return this->env;
}

void Map::set_name(std::string input_name)
{
	this->name = input_name;
}

Map::Map() {}

Map::Map(std::string input_name) 
{
	this->name = input_name;
}

Map::~Map() {}

void Map::load_bg_image()
{
	bg_image = bg_generator->generate_background();
}

void Map::set_bg_generator(Background_generator* bg_gen)
{
	bg_generator = bg_gen;
}