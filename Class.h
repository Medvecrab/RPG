#pragma once
#include <vector>
#include <string>
#include "Class_ability.h"
#include "Different_ability_creators.h"
#include "Subscriber.h"

class Class : Subscriber
{
protected:	
	std::string desc;
public:
	std::vector <Class_ability*> list_of_abilities;
	Class();
	Class(std::string);
	void add_ability();
	std::string get_description();
	virtual void use_ability(Character*, Class_ability*);
	void scale_abilities();
};

