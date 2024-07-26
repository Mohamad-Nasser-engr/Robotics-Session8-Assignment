#include "store.h"
#include <string>
#include <iostream>
using namespace std;

Store::Store(const string &itemName, int initialStock, bool opening, float cost){
    item = new string(itemName);
    stock = new int(initialStock);
    open = new bool(opening);
    price = new float(cost);
}

Store::~Store(){
    delete item;
    delete stock;
}

void Store::AddStock(int amount) {
    cout<< "Added "<< amount << " "<< *item << endl;
    *stock += amount;
}

int Store::GetStock() const{
    return *stock;
}

void Store::SetStock(int amount){
    *stock = amount;
}

void Store::RemoveStock(int amount){   
    cout<< "Removed " << amount << " " << *item << endl;
    *stock -=amount;
    
}

bool Store::isOpen() const{
    return *open;
}

void Store::setOpen(bool state){
    *open = state;
}

float Store::GetPrice() const{
    return *price;
}

void Store::SetPrice(float new_price){
    *price = new_price;
}

void Store::BuyItem(int item_amount, float money_given){
    float cost = item_amount * *price;
    float change;
    if(isOpen()){
        cout << "Items cost: "<< cost << endl;
        if (money_given >= cost){
            if (*stock >= item_amount){
                RemoveStock(item_amount);
                change = money_given -cost;
                cout<< "Change returned: "<< change << endl;
            }
            else{
                cout << "Not enough Stock" << endl;
            }
        
        }
        else{
        cout << "Not enough money given!"<< endl;
    }

    }
    else{
        cout << "Store is closed!" << endl;
    }
    
}