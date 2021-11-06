#include "Player.h"
#include "Saver.h"
#include "Savers.h"

Player::Player()
{
	if (this->health > 0) //TODO: нормальное условие, и желательно в другом месте
		saver = new Quicksave();
	else
		saver = new Fullsave();
}

Player::Player(int cur_health)
{
	this->health = cur_health;
	if (this->health > 0) //TODO: нормальное условие, и желательно в другом месте
		saver = new Quicksave();
	else
		saver = new Fullsave();
}

Player::Player(std::string input_name)
{
	this->name = input_name;
}

Player::~Player()
{

}

int Player::save_character(std::string filename)
{
	return saver->save_character(filename);
}