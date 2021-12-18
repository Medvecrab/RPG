#pragma once
#include <vector>
#include <string>
#include "Class_ability.h"
#include "Different_ability_creators.h"

class Class
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
};

