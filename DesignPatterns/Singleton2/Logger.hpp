//
//  Logger.hpp
//  DesignPatterns
//
//  Created by Ashish Shandilya on 18/03/23.
//

#ifndef Logger_hpp
#define Logger_hpp

#include <stdio.h>
#include<iostream>
#include<mutex>
class Logger
{
  
private:
    Logger();
    static Logger* instance;
    static std::mutex varLock;
public:
    static Logger* getLogger();
};

#endif /* Logger_hpp */
