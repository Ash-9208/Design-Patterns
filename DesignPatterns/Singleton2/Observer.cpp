//
//  Observer.cpp
//  DesignPatterns
//
//  Created by Ashish Shandilya on 18/03/23.
//

#include "Observer.hpp"
#include<iostream>
#include<string>
using namespace std;

User::User(int userId):userId(userId){}
void User::notify(string Msg)
{
    cout<<"User #"<<userId<<" Received "<<Msg<<endl;
}
Group::Group(){}
void Group::subscribe(Iuser* newUser)
{
    userList.push_back(newUser);
}
void Group::unSubscribe(Iuser* existingUsr)
{
    userList.remove(existingUsr);
}
void Group::notifyall(string Msg)
{
    for(auto i:userList)i->notify(Msg);
}

