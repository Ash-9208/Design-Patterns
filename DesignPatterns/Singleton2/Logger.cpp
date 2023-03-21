//
//  Logger.cpp
//  DesignPatterns
//
//  Created by Ashish Shandilya on 18/03/23.
//

#include "Logger.hpp"
#include<iostream>
#include<mutex>
using namespace::std;

Logger* Logger::instance=nullptr;
Logger::Logger(){}
mutex Logger :: varLock;
Logger* Logger::getLogger()
{
   varLock.lock();
    if(instance==nullptr)
    {
        instance =new Logger();
    }
    varLock.unlock();
    cout<<" instance Address : "<<instance<<endl;
    return instance;
}
