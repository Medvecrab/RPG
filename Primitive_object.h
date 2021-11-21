#pragma once
#include "Environmental_object.h"

class Primitive_object : public Environmental_object
{
public:
	Primitive_object();
	void react() override;
};

