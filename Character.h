#pragma once
#include <string>
#include <vector>
#include <iostream>

class Character
{
protected: 
	std::string name;
	int health;
	int resource;
public:
	Character();
	Character(std::string, int);
	std::string get_name();
	int get_health();
	void set_health(int);
	int get_resource();
	void set_resource(int);
	std::vector<Character*> get_visible_characters();
	void spawn(int, int);
};

