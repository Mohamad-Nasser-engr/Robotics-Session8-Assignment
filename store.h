#ifndef STORE_H
#define STORE_H
#include  <string>

using namespace std;

class Store {
    private:
        int* stock;
        string* item;
        bool* open;
        float* price;

    public:

        Store(const string &itemName, int initialStock, bool opening, float cost);

        ~Store();

        void AddStock(int amount);
        int GetStock() const;
        void SetStock(int amout);
        void RemoveStock(int amount);
        
        bool isOpen() const;
        void setOpen(bool state);

        float GetPrice() const;
        void SetPrice(float price);

        void BuyItem(int item_amount, float money_given);


        

};

#endif