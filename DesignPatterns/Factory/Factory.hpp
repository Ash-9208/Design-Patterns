//
//  Factory.hpp
//  DesignPatterns
//
//  Created by Ashish Shandilya on 18/03/23.
//

#ifndef Factory_hpp
#define Factory_hpp

#include <stdio.h>
#include<string>

class vehicle
{
public:
    virtual void createVehicle()=0;
};

class Factory
{
     static vehicle* Vehicle;
public:
    static void makeVehicle(std::string);
};



class Car:public vehicle
{
public:
    void createVehicle();
};
class Bike:public vehicle
{
public:
    void createVehicle();
};

#endif /* Factory_hpp */
