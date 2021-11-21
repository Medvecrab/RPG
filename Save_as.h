#pragma once
#include "Saver_decorator.h"

class Save_as_txt : public Saver_decorator
{
public:
	void save_world(std::string filename) override;
};

class Save_as_dat : public Saver_decorator
{
public:
	void save_world(std::string filename) override;
};

class Save_as_wrld : public Saver_decorator
{
public:
	void save_world(std::string filename) override;
};

