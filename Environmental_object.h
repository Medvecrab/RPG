#pragma once
#include <string>

class Enivironmental_object
{
protected:
	std::string sprite; //�������� ����� �� ��������
public:
	Enivironmental_object(std::string);
	virtual void react();
};

