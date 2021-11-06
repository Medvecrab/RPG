#pragma once
#include "Character.h"
#include "Saver.h"
#include <string>

class Player :
    public Character
{
private:
    Saver* saver;
public:
    Player();
    Player(int);
    Player(std::string);
    ~Player();
    int save_character(std::string filename);
};

