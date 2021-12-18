#pragma once
#include <vector>
#include <string>
#include "Class_ability.h"
#include "Different_ability_creators.h"

class Class
{
	private:	
		std::vector <Class_ability*> list_of_abilities;
		std::string desc;
	public:
		Class(std::string);
		void add_ability();
		std::string get_description();
};

