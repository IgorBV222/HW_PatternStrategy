#pragma once
#include "IVehicle.h"

class Lorry : public IVehicle
{
public:
	Lorry();
	~Lorry() {};
	void cargoUnloading() override;
	void useStrategyStorage(std::shared_ptr <IStorage> storage) override;	
};