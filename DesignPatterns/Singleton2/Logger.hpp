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
class Logger
{
  
private:
    Logger();
    static Logger* instance;
public:
    static Logger* getLogger();
};

#endif /* Logger_hpp */
