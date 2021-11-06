#pragma once
#include <string>

class Saver
{
public:
	Saver() {};
	~Saver() {};
	virtual int save_character(std::string filename) = 0;
};

