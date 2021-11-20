#pragma once
#include <string>

class Enivironmental_object
{
protected:
	std::string sprite; //название файла со спрайтом
public:
	Enivironmental_object(std::string);
	virtual void react();
};

