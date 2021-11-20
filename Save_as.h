#pragma once
#include "Saver_decorator.h"

class Save_as_txt : Saver_decorator
{
public:
	void save_world(std::string filename) override;
};

class Save_as_dat : Saver_decorator
{
public:
	void save_world(std::string filename) override;
};

class Save_as_wrld : Saver_decorator
{
public:
	void save_world(std::string filename) override;
};

