#pragma once
#include "Vehicle.h"

class Truck: public Vehicle
{
private:
	double load;
	double max_load;
public:
	Truck(double l, double max_l, double p, double max_p);
	double getCurrentLoad();		//получить текущую загруженность машины(масса груза в тоннах);
	double getMaxLoad();			//узнать максимальную вместительность(грузоподъемность) машины;
	void arrive();					// приехать на базу;
	bool leave();
};

