#include "Base.h"
#include "Vehicle.h"
#include "Bus.h"
#include "Truck.h"

#include <iostream>
using namespace std;

int main() 
{
    Base* base = new Base(1500, 150, 2500, 5000);       //create a base
    Vehicle* bus = new Bus(50, 100, 3, 150);            //create a bus
    Vehicle* truck = new Truck(150, 300, 300, 1000);    //create a truck

    cout << "Base Information:\n " << endl;
    base->Print();
    cout << endl << "----------------" << endl << endl;
    for (int i = 0; i < 3; i++) 
    {
        if (bus->leave()) 
        {
            cout << "Bus has left" << endl;
        }  
        else 
        {
            cout << "Bus cannot leave" << endl;
        }
           
    }

    for (int i = 0; i < 3; i++) 
    {
        bus->arrive();
    }
    cout << "Base Information:\n " << endl;
    base->Print();
    cout << endl << "----------------" << endl << endl;


    for (int i = 0; i < 4; i++) 
    {
        if (truck->leave()) 
        {
            cout << "The truck has left" << endl;
        }
        else 
        {
            cout << "Truck cannot leave" << endl;
        }
           
    }
    truck->arrive();
    cout << "Base Information:\n " << endl;
    base->Print();
    cout << endl << "----------------" << endl << endl;

}