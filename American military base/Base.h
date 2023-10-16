#pragma once
#include "Vehicle.h"

class Base
{
protected:
	Vehicle* vehicle;
public:
	static int people_on_base;
	static int vehicles_on_base;
	static double petrol_on_base;
	static double goods_on_base;

	Base();
	Base(int people, int vehicles, double petrol, double goods);

	void Print() const;
	void AddVehicle(Vehicle*);

	void SetPeopleOnBase(int p);
	void SetVehiclesOnBase(int v);
	void SetPetrolOnBase(double petrol);
	void SetGoodsOnBase(double goods);
	
	int GetPeopleOnBase() const;
	int GetVehiclesOnBase() const;
	double GetPetrolOnBase() const;
	double GetGoodsOnBase() const;

	~Base();
};

