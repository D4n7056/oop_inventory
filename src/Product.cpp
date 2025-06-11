#include "../include/Product.h"
#include <iostream>

using namespace std;

Product::Product(string id, string name, string type, string description, float price, int stock)
    : id(id), name(name), type(type), description(description), price(price), stock(stock) {}

void Product::updateStock(int quantity) {
    stock += quantity;
}

void Product::changePrice(float newPrice) {
    price = newPrice;
}
