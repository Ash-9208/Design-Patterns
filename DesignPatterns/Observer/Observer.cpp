//
//  Observer.cpp
//  DesignPatterns
//
//  Created by Ashish Shandilya on 18/03/23.
//

#include "Observer.hpp"

void ObserverTestData()
{
    Cgroup *grp1= new Cgroup();
    
    Cuser *usr1= new Cuser(1);
    Cuser *usr2= new Cuser(2);
    
    grp1->Register(usr1);
    grp1->Register(usr2);
    
    grp1->notify("Hello User");
    
    grp1->Unregister(usr1);
    
    grp1->notify("Hello Again");
}
