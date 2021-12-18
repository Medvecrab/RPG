#pragma once
#include "Builder.h"
#include "Player.h"

class Player_builder
{
private:
	Player* result;
public:
	//TODO: ������� ���-��� ���� ���������, � ��� ��� ��� ������� build-�������
	Player_builder();
	void build_health(int);
	void build_resource(int);
	void build_karma_points(int);
	void build_name(std::string);
	Player* get_player();
};
