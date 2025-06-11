#include "../include/Sticker.h"

using namespace std;

Sticker::Sticker(string id, string name, string description, float price, int stock)
    : Product(id, name, "Sticker", description, price, stock) {}

// here we assign the value for the pure virtual method of Product
string Sticker::showInfo() const {
    return "--- Sticker: " + name + " (ID: " + id + 
    ")---\nDescription: " + description +
    "\nPrice: $" + to_string(price) + 
    "\nStock: " + to_string(stock) + 
    "----------------------------------------\n";
}
