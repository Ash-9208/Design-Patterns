//
//  Observer.hpp
//  DesignPatterns
//
//  Created by Ashish Shandilya on 18/03/23.
//

#ifndef Observer_hpp
#define Observer_hpp

#include <stdio.h>
#include<string>
#include<list>

class Iuser
{
public:
    virtual void notify(std::string)=0;
};

class User:public Iuser
{
private:
    int userId;
public:
    User(int);
    void notify(std::string);
};
class Group
{
private:
    std::list<Iuser*>userList;
public:
    Group();
    void subscribe(Iuser*);
    void unSubscribe(Iuser*);
    void notifyall(std::string);
};

#endif /* Observer_hpp */
