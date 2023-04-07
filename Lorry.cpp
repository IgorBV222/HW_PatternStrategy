#include "Lorry.h"

Lorry::Lorry(){}
void Lorry::cargoUnloading()
{
	std::cout << "Unloading cargo from a Lorry!\n ";
}

void Lorry::useStrategyStorage(std::shared_ptr<IStorage> storage)
{
	storage->cargoStorage();
}


