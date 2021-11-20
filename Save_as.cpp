#include "Save_as.h"

//TODO: хотя бы файлики открывать

void Save_as_txt::save_world(std::string filename)
{
	std::cout << "World saved as " << filename << ".txt" << std::endl;
}

void Save_as_dat::save_world(std::string filename)
{
	std::cout << "World saved as " << filename << ".dat" << std::endl;
}

void Save_as_wrld::save_world(std::string filename)
{
	std::cout << "World saved as " << filename << ".wrld" << std::endl;
}