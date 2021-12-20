#include "Tester.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Tester* test = new Tester();
	/*test->test_adapter();
	test->test_decorator();
	test->test_composite();
	test->test_iterator();
	test->test_bridge();
	test->test_flyweight();
	test->test_facade();
	test->test_factory();
	test->test_abstract_factory();
	test->test_singleton();
	test->test_prototype();
	test->test_builder();
	test->test_multiton();
	test->test_object_pool();
	test->test_state();
	test->test_memento();
	test->test_strategy();*/
	test->test_visitor_and_observer();
}