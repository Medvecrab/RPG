#pragma once
#include <string>
#include <vector>

class Character
{
protected: 
	std::string name;
	int health;
	int resource;
public:
	std::string get_name();
	int get_health();
	void set_health(int);
	int get_resource();
	void set_resource(int);
	std::vector<Character*> get_visible_characters();
};

