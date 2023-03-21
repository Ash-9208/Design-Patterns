//
//  Car.hpp
//  DesignPatterns
//
//  Created by Ashish Shandilya on 21/03/23.
//

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
#include<string>
using namespace std;

class CCar
{
private:
    string engine;
    string transmission;
    string bodyType;
public:
    void showSpecs();
    CCar* getCar();
    void setEngine(string);
    void setTrans(string);
    void setBodyType(string);
};

#endif /* Car_hpp */
