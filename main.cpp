#include "Tester.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Tester* test = new Tester();
	test->main_menu();
}