#pragma once
#include "Proxy_world.h"
#include "World.h"
#include "Player.h"
#include "Class_ability.h"
#include "Adapter.h"
#include "Saver.h"
#include "Saver_decorator.h"
#include "Save_as.h"
#include <iostream>
#include <stdio.h>

class Tester
{
public:
	void test_proxy();
	//void test_delegate();
	void test_adapter();
	void test_decorator();
	void test_iterator();
	void test_composite();
	void test_bridge();
	void test_flyweight();
	void test_facade();
};

