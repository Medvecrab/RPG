#include "Difficulty.h"

Difficulty* Difficulty::get_instance(Difficulty_type type, std::string name)
{
    if (difficulties.find(type) == difficulties.end()) //��� ��� ����� ���������
    {
        difficulties.insert(std::make_pair(type, new Difficulty(name)));
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