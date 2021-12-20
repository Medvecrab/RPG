#include "Difficulty.h"

Difficulty* Difficulty::get_instance(Difficulty_type type, std::string name)
{
    bool Diff_exists = false;
    for (int i = 0; i < difficulties.size(); i++)
    if (difficulty_types[i] == type) //ещё нет такой сложности
    {
        Diff_exists = true;
    }
    if (!Diff_exists)
    {
        difficulties.push_back(new Difficulty(name));
        difficulty_types.push_back(type);
    }
    return difficulties[type];
}

std::string Difficulty::get_name()
{
    return name;
}

Difficulty::Difficulty(std::string new_name)
{
    name = new_name;
}

Difficulty::~Difficulty()
{
    for (int i = 0; i < difficulties.size(); i++)
    {
        delete difficulties[i];
    }
}
