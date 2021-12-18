#include "Difficulty.h"

Difficulty* Difficulty::get_instance(Difficulty_type type, std::string name)
{
    if (difficulties.find(type) == difficulties.end()) //ещё нет такой сложности
    {
        difficulties.insert(std::make_pair(type, new Difficulty(name)));
    }
    return difficulties[type];
}

Difficulty::Difficulty(std::string new_name)
{
    name = new_name;
}