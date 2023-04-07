#pragma once
#include "IStorage.h"

class Refrigerator : public IStorage
{
public:
	Refrigerator() {}	
	void cargoStorage() override;
	~Refrigerator() {};
};