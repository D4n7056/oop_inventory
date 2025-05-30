#include "Product.h"

using namespace std;

#ifndef DRAWING_W
#define DRAWING_W

class Drawing : public Product {
public:
    Drawing(string id, string name, float price, int stock);
    string showInfo() const override;
};

#endif