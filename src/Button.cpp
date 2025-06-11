#include "../include/Button.h"

using namespace std;

Button::Button(string id, string name, string description, float price, int stock)
    : Product(id, name, "Button", description, price, stock) {}

// here we assign the value for the pure virtual method of Product
string Button::showInfo() const {
    return "--- Button: " + name + " (ID: " + id + 
    ") ---\nDescription: " + description +
    "\nPrice: $" + to_string(price) + 
    "\nStock: " + to_string(stock) + 
    "----------------------------------------\n";
}
