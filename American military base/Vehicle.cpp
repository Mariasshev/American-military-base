#include "Vehicle.h"

Vehicle::Vehicle(double tank, double petrol) {
    tank_volume = tank;
    petrol_amount = petrol;
}


double Vehicle::getTankVolume()
{
    return tank_volume;
}

double Vehicle::getPetrolAmount()
{
    return petrol_amount;
}

