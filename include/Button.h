#include "Product.h"

using namespace std;

#ifndef BUTTON_H
#define BUTTON_H

// we use inheritance to create a subclass of Product 
class Button : public Product {
public:
    Button(std::string id, std::string name, std::string description, float price, int stock);
    std::string showInfo() const override;
};

#endif
