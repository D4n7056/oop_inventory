#include "Product.h"
using namespace std;

#ifndef STICKER_H
#define STICKER_H

class Sticker : public Product {
public:
    Sticker(string id, string name, float price, int stock)
        : Product(id, name, "Sticker", price, stock) {}
    string showInfo() const override;
};

#endif