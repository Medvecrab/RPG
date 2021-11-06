#pragma once
#include <string>

class Map
{
private:
	std::string name;
public:
	std::string get_name();
	void set_name(std::string);
	Map();
	Map(std::string);
	~Map();
};

