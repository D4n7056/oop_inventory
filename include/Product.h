#include <iostream>

using namespace std;

#ifndef PRODUCT_H
#define PRODUCT_H


class Product {
    protected:
        string id, name, type, description;
        float price;
        int stock;

    public:
        Product(string id, string name, string type, string _description, float price, int stock);
        // here we declare the pure virtual method
        // we dont define the method in the cpp
        virtual string showInfo() const = 0;

        void updateStock(int quantity);
        void changePrice(float newPrice);
};

#endif
