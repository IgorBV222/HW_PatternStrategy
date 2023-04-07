#pragma once
#include "IStorage.h"

class Hangar : public IStorage
{
public:
	Hangar() {}	
	void cargoStorage() override;
	~Hangar() {};
};