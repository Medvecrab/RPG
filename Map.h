#pragma once
#include <string>
#include "Environment.h"

class Map
{
private:
	std::string name;
	Environment* env;

public:
	std::string get_name();
	void set_name(std::string);
	Environment* get_env();
	Map();
	Map(std::string);
	~Map();
};

