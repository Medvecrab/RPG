#pragma once
#include "Class_ability.h"
#include "Global_ability.h"

class Adapter : public Class_ability
{
private:
	Global_ability* adaptable;
public:
	void cast(Character*) override;
	Adapter(Global_ability*);
	std::string get_description() override;
};

