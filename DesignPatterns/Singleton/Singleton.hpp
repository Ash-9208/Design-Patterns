//
//  Singleton.hpp
//  DesignPatterns
//
//  Created by Ashish Shandilya on 17/03/23.
//

#ifndef Singleton_hpp
#define Singleton_hpp

#include <iostream>
using namespace std;
class singleton
{
private:
     inline static singleton *obj=nullptr;
    singleton (){};
public:
    int var=10;
    singleton(const singleton& copyObject)=delete;
    
     static singleton* getInstance()
    {
        if(obj==nullptr)
        {
            obj= new singleton();
        }
        cout<<"Current Object Address is :\t"<<obj<<endl;
        return obj;
    }
    
};



#endif /* Singleton_hpp */
