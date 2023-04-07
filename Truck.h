#pragma once
#include "IVehicle.h"

class Truck : public IVehicle
{
public:
	Truck();
	~Truck() {};	
	void cargoUnloading() override;
	void useStrategyStorage(std::shared_ptr <IStorage> storage) override;	
};

