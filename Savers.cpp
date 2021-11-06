#include "Savers.h"
#include "stdio.h"

#define FILE_IS_ACCESSIBLE 1

int Fullsave::save_character(std::string filename)
{
	if (FILE_IS_ACCESSIBLE)
	{
		//TODO: нормальное сохранение в файл
		printf("All data is saved!\n");
		return 0;
	}
	else
	{
		printf("File can't be accessed!\n");
		return 1;
	}
}


int Quicksave::save_character(std::string filename)
{
	if (FILE_IS_ACCESSIBLE)
	{
		//TODO: нормальное сохранение в файл
		printf("Health and resource are saved!\n");
		return 0;
	}
	else
	{
		printf("File can't be accessed!\n");
		return 1;
	}
}