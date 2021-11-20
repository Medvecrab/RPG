#pragma once
#include <vector>
#include <string>
#include "Class_ability.h"

class Class
{
	private:	
		std::vector <Class_ability*> list_of_abilities;
		std::string desc;
	public:
		Class(std::string);
		void add_ability(Class_ability* abil);
		std::string get_description();
};

