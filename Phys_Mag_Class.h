#pragma once
#include "Class.h"
class Physical : public Class
{
public:
	const std::string preferred_damage_type = "����������";
	Physical();
};

class Magical : public Class
{
public:
	const std::string preferred_damage_type = "����������";
	Magical();
};