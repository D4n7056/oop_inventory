#include "../include/Drawing.h"

using namespace std; 

Drawing::Drawing(string id, string name, string description, float price, int stock)
    : Product(id, name, "Drawing", description, price, stock) {}

// here we assign the value for the pure virtual method of Product
string Drawing::showInfo() const {
    return "--- Drawing: " + name + " (ID: " + id + 
    ")---\nDescription: " + description +
    "\nPrice: $" + to_string(price) + 
    "\nStock: " + to_string(stock) + 
    "----------------------------------------\n";
}
