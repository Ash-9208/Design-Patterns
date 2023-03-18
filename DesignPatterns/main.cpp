#include <iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<tuple>
#include "Singleton/Singleton.hpp"
#include "Observer.hpp"
using namespace std;

class Iitem
{
public:
    virtual int calculate()=0;
};
class Cmarker:public Iitem
{
private:
    int price;
    int quantity;
public:
    Cmarker(int price,int quantity=1):price{price},quantity{quantity}{}
    int calculate () override
    {
        return price * quantity;
    }
};

class Cinvoice
{
    Iitem *groceryItem;
public:
    Cinvoice(Iitem *groceryItem):groceryItem{groceryItem}{}
    void display(){ cout<<groceryItem->calculate();}
};

int main() {
  
    Cmarker m(10,10);
    Cinvoice invoice(&m);invoice.display();
    return 0;
}
