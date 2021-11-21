#include "Save_as.h"

//TODO: ���� �� ������� ���������

void Save_as_txt::save_world(std::string filename)
{
	std::cout << "World saved as " << filename << ".txt" << std::endl;
	if (this->wrapee != nullptr)
		wrapee->save_world(filename);
}

void Save_as_dat::save_world(std::string filename)
{
	std::cout << "World saved as " << filename << ".dat" << std::endl;
	if (this->wrapee != nullptr)
		wrapee->save_world(filename);
}

void Save_as_wrld::save_world(std::string filename)
{
	std::cout << "World saved as " << filename << ".wrld" << std::endl;
	if (this->wrapee != nullptr)
		wrapee->save_world(filename);
}