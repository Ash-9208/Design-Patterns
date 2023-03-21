//
//  CarBuilder.hpp
//  DesignPatterns
//
//  Created by Ashish Shandilya on 21/03/23.
//

#ifndef CarBuilder_hpp
#define CarBuilder_hpp

#include <stdio.h>
#include "Car.hpp"

class CarBuilder
{
protected:
    CCar *carObj;
public:
    CarBuilder():carObj{new CCar()}{}
    virtual void buildEngine()=0;
    virtual void buildTrans()=0;
    virtual void buildBody()=0;
    virtual void showCar()=0;
    virtual CCar* getCar()=0;
};
class SuvBuilder:public CarBuilder
{
public:
    void buildEngine() override;
    void buildTrans() override;
    void buildBody() override;
    void showCar() override;
    CCar* getCar() override;
};
#endif /* CarBuilder_hpp */
