#include "Product.h"

#ifndef PIN_H
#define PIN_H

class Pin : public Product {
public:
    Pin(string id, string name, float price, int stock);
    string showInfo() const override;
};
#endif