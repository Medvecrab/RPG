#pragma once
#include <string>

class Environmental_object
{
protected:
	std::string sprite; //�������� ����� �� ��������
public:
	Environmental_object(std::string);
	virtual void react();
};

