//
//  Factory.cpp
//  DesignPatterns
//
//  Created by Ashish Shandilya on 18/03/23.
//

#include "Factory.hpp"
#include<iostream>
#include<string>
using namespace std;

void Factory::makeVehicle(string V)
{
    if(V=="car")
    {
        vehicle* Vehicle = new Car();
        Vehicle->createVehicle();
    }
    if(V=="bike")
    {
        vehicle* Vehicle = new Bike();
        Vehicle->createVehicle();
    }
}
void Car::createVehicle(){
    cout<<"Car Created\n";
}
void Bike::createVehicle()
{
    cout<<"Bike Created\n";
}
