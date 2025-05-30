#include "Product.h"

#ifndef BUTTON_H
#define BUTTON_H

class Button : public Product {
public:
    Button(string id, string name, float price, int stock);
    string showInfo() const override;
};

#endif