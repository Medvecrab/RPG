#pragma once
#include <map>
#include <string>

enum Difficulty_type
{
	EASY = 1,
	MEDIUM,
	HARD
};


class Difficulty
{
private:
	std::string name;
	Difficulty_type difficulty;
	std::map<Difficulty_type, Difficulty*>difficulties;
	Difficulty(std::string);
public:
	Difficulty* get_instance(Difficulty_type, std::string);
	std::string get_name();
};

