#pragma once
#include <string>
#include <iostream>
#include <string>

// ������� ����� ��������
class IStorage
{
public:	
	virtual void cargoStorage() = 0;
	virtual ~IStorage() {}
};