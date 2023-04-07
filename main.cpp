#include <iostream>
#include "IVehicle.h"
#include "Hangar.h"
#include "Truck.h"
#include "Lorry.h"
#include "Refrigerator.h"



int main()
{
    Truck truck;
    Lorry lorry;   
    std::string vehicle, storage;    
    std::shared_ptr<IStorage> stock;

    std::cout << "Enter vehicle (Truck,Lorry): ";
    std::cin >> vehicle;
    std::cout << "Enter storage(Hangar, Refrigerator): ";
    std::cin >> storage;

    if (vehicle == "Truck") {
        truck.cargoUnloading(); 
        if (storage == "Hangar") {
            stock = std::make_shared<Hangar>();
        }
        else if (storage == "Refrigerator") {
            stock = std::make_shared<Refrigerator>();
        }
        truck.useStrategyStorage(stock);      
    }
    else if (vehicle == "Lorry") {
        lorry.cargoUnloading();   
        if (storage == "Hangar") {
            stock = std::make_shared<Hangar>();
        }
        else if (storage == "Refrigerator") {
            stock = std::make_shared<Refrigerator>();
        }
        lorry.useStrategyStorage(stock);      
    }
    
    return 0;
}
