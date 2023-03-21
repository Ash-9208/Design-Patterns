//
//  Car.cpp
//  DesignPatterns
//
//  Created by Ashish Shandilya on 21/03/23.
//
#include<iostream>
#include "Car.hpp"

using namespace std;

void CCar::setEngine(string engineType)
{
    this->engine=engineType;
}
void CCar::setTrans(string transType)
{
    this->transmission=transType;
}
void CCar::setBodyType(string body)
{
    this->bodyType=body;
}
void CCar::showSpecs()
{
    cout<<"Engine :"<<this->engine<<endl;
    cout<<"Transmission :"<<this->transmission<<endl;
    cout<<"BodyType :"<<this->bodyType<<endl;
}
CCar* CCar::getCar()
{
    return this;
}
