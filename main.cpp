#include <iostream>
#include "store.h"
using namespace std;

int main(){

    Store Laptop("Laptop", 10 , true, 1000.0);

    cout << "Stock: " << Laptop.GetStock() << endl;
    Laptop.AddStock(20);
    cout << "Stock : " << Laptop.GetStock() << endl;
    
    cout <<endl;
    cout << "First buy attempt\n";
    Laptop.BuyItem(100, 100000.0);
    
    cout<<endl;
    cout << "Second buy attempt\n";
    Laptop.BuyItem(5, 4000.0);

    cout<<endl;
    Laptop.setOpen(false);
    cout << "Third buy attempt\n";
    Laptop.BuyItem(5, 6000.0);

    cout<<endl;
    Laptop.setOpen(true);
    cout << "Fourth buy attempt\n";
    Laptop.BuyItem(5, 6000.0);

    return 0;
}

