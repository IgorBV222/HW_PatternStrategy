#pragma once
#include <string>
#include <iostream>
#include "IStorage.h"

class IVehicle
{
public:
	virtual ~IVehicle() {}
	virtual void cargoUnloading() = 0;
	virtual void useStrategyStorage(std::shared_ptr <IStorage> storage) = 0;
protected:
	std::shared_ptr <IStorage> _storage;	
};

