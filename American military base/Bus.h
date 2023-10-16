#pragma once
#include "Vehicle.h"
class Bus:public Vehicle
{
private:
	int people;
	int max_people;

public:
	Bus(int peop, int max_peop, double tank, double petrol);
	int getPeopleCount();			//получить текущее количество пассажиров(водитель в это число не входит);
	int getMaxPeople();				//получить количество пассажирских мест;
	void arrive();					// приехать на базу;
	bool leave();
};

