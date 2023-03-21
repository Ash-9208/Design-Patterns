//
//  CarBuilder.cpp
//  DesignPatterns
//
//  Created by Ashish Shandilya on 21/03/23.
//

#include "CarBuilder.hpp"

void SuvBuilder::buildEngine()  {carObj->setEngine("SUVengine");}
void SuvBuilder:: buildTrans()  {carObj->setTrans("SUV");}
void SuvBuilder::buildBody()    {carObj->setBodyType("SUVBody");}
void SuvBuilder::showCar()      {carObj->showSpecs();}
CCar * SuvBuilder::getCar() {return carObj->getCar();}
