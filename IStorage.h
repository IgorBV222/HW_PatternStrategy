#pragma once
#include <string>
#include <iostream>
#include <string>

// базовый класс стратеги
class IStorage
{
public:	
	virtual void cargoStorage() = 0;
	virtual ~IStorage() {}
};