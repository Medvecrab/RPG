#include "Tester.h"

int main()
{
	Tester* test = new Tester();
	test->test_delegate();
	test->test_proxy();
}