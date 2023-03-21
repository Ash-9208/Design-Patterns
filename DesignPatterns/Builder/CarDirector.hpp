//
//  CarDirector.hpp
//  DesignPatterns
//
//  Created by Ashish Shandilya on 21/03/23.
//

#ifndef CarDirector_hpp
#define CarDirector_hpp

#include <stdio.h>
#include"CarBuilder.hpp"
class CarDirector
{
   inline static CarBuilder *builder =nullptr;
public:
    inline static CCar* getCar(CarBuilder *obj)
    {
        builder=obj;
        builder->buildTrans();
        builder->buildEngine();
        builder->buildBody();
        return builder->getCar();
    }
};

#endif /* CarDirector_hpp */
