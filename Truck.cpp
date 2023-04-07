#include "Truck.h"

Truck::Truck(){}
void Truck::cargoUnloading()
{
	std::cout << "Unloading cargo from a Truck!\n";
}

void Truck::useStrategyStorage(std::shared_ptr<IStorage> storage)
{
	storage->cargoStorage();
}