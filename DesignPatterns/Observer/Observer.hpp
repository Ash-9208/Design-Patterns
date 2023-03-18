//
//  Observer.hpp
//  DesignPatterns
//
//  Created by Ashish Shandilya on 18/03/23.
//

#ifndef Observer_hpp
#define Observer_hpp

#include <stdio.h>
#include<iostream>
#include<string>
#include<list>
class Isubscriber
{
public:
    virtual void notify(std::string)=0;
};
class Cuser:public Isubscriber
{
private:
    int userId;
public:
    Cuser(int userId):userId{userId}{}
    void notify(std::string msg) override
    {
        std::cout<<"User #"<<userId<<" Notified with "<<msg<<std::endl;
    }
};
class Cgroup
{
private:
   std:: list<Isubscriber*>userList;
public:
    void Register(Isubscriber *user)
    {
        userList.push_back(user);
    }
    void Unregister(Isubscriber *user)
    {
        userList.remove(user);
    }
    void notify(std::string Msg)
    {
        for(auto itr:userList)itr->notify(Msg);
    }
};
void ObserverTestData();
#endif /* Observer_hpp */
