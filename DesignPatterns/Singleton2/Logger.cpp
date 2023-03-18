//
//  Logger.cpp
//  DesignPatterns
//
//  Created by Ashish Shandilya on 18/03/23.
//

#include "Logger.hpp"
#include<iostream>
using namespace::std;

Logger* Logger::instance=nullptr;
Logger::Logger(){}
Logger* Logger::getLogger()
{
    if(instance==nullptr)
    {
        instance =new Logger();
    }
    cout<<" instance Address : "<<instance<<endl;
    return instance;
}
