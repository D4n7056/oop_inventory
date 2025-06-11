#include "../include/Pin.h"

using namespace std; 

Pin::Pin(string id, string name, string description, float price, int stock)
    : Product(id, name, "Pin", description, price, stock) {}

// here we assign the value for the pure virtual method of Product
string Pin::showInfo() const {
    return "--- Pin: " + name + " (ID: " + id + 
    ")---\nDescription: " + description +
    "\nPrice: $" + to_string(price) + 
    "\nStock: " + to_string(stock) + 
    "----------------------------------------\n";
}
