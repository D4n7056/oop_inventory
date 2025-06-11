#include "Product.h"

using namespace std;

#ifndef STICKER_H
#define STICKER_H

class Sticker : public Product {
public:
    Sticker(string id, string name, string description, float price, int stock);
    string showInfo() const override;
};

#endif
