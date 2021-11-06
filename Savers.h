#pragma once
#include "Saver.h"
#include <string>

class Fullsave :
    public Saver
{
public:
    int save_character(std::string filename) override;
};

class Quicksave :
	public Saver
{
public:
	int save_character(std::string filename) override;
};

