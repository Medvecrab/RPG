#pragma once
#include <string>

class Environmental_object
{
protected:
	std::string sprite; //название файла со спрайтом
public:
	Environmental_object(std::string);
	virtual void react();
};

