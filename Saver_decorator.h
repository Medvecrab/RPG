#pragma once
#include "Saver.h"

class Saver_decorator : Saver
{
protected:
	Saver* wrapee;
public:
	Saver_decorator(Saver*);
	virtual void save_world(std::string filename) override;
};

