#pragma once
#include "Proxy_world.h"
#include "World.h"
#include "Player.h"
#include "Class_ability.h"
#include "Adapter.h"
#include "Saver.h"
#include "Saver_decorator.h"
#include "Save_as.h"
#include "Environmental_object.h"
#include "Compound_object.h"
#include "Primitive_object.h"
#include "Environment.h"
#include "Background_generator.h"
#include "Perlin_noise.h"
#include "Voronoi_diagramm.h"
#include "Loader.h"
#include "Unique_state_env_obj.h"
#include "Player_director.h"
#include "Map_history.h"
#include "Publisher.h"
#include "Abilities.h"
#include "Different_ability_creators.h"
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
	void test_factory();
	void test_abstract_factory();
	void test_singleton();
	void test_prototype();
	void test_builder();
	void test_multiton();
	void test_object_pool();
	void test_state();
	void test_memento();
	void test_strategy();
	//void test_visitor();
	//void test_observer();
	void test_visitor_and_observer();
};

