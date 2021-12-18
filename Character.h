#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Four_classes.h"
#include "Concrete_factories.h"

class Character
{
protected: 
	std::string name;
	int health;
	int resource;
	Abstract_factory* factory;
public:
	float x, y;
	Character();
	Character(std::string, int);
	std::string get_name();
	int get_health();
	void set_health(int);
	int get_resource();
	void set_resource(int);
	std::vector<Character*> get_visible_characters();
	void spawn(int, int);
	void set_class();
};

