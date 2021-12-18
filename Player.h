#pragma once
#include "Character.h"
#include "Saver.h"
#include <string>

class Player :
    public Character
{
private:  
public:
    int karma_points;
    Player(std::string);
    Player();
};

