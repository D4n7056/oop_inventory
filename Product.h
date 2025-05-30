
#include <string>
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
    Product(string id, string name, string type, float price, int stock);

    virtual string showInfo() const;
    void updateStock(int quantity);
    void changePrice(float newPrice);
};

#endif