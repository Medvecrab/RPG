#pragma once
#include <vector>
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
	std::vector<Difficulty*> difficulties; //���������� map ������� �� �����, ������� ��� �������
	std::vector<Difficulty_type> difficulty_types; //���������� map ������� �� �����, ������� ��� �������
	Difficulty(std::string);
public:
	~Difficulty();
	Difficulty* get_instance(Difficulty_type, std::string);
	std::string get_name();
};
