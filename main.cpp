#include "Tester.h"

int main()
{
	Tester* test = new Tester();
	test->test_adapter();
	test->test_decorator();
	test->test_composite();
	test->test_iterator();
	test->test_bridge();
	test->test_flyweight();
	test->test_facade();
}