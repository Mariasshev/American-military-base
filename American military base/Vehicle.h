#pragma once
class Vehicle
{
protected:
	double petrol_amount;
	double tank_volume;
	double petrol;
	double max_petrol;
public:
	Vehicle(double tank, double petrol);
	double getTankVolume();			//узнать объем бензобака в литрах;
	double getPetrolAmount();		//узнать текущее количество топлива в баке;
	virtual void arrive() = 0;		// приехать на базу;
	virtual bool leave() = 0;		//залить полный бак и покинуть базу; в случае невозможности уехать возвращает false;
};

