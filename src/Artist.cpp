#include "../include/Artist.h"
#include <iostream>
using namespace std;


Artist::Artist(string firstName, string lastName, string birthDay, string nationality, string style, string biography)
    : firstName(firstName), lastName(lastName), birthDate(birthDay), nationality(nationality), mainStyle(style), biography(biography) {}


string Artist::getFullName() const {
    return firstName + " " + lastName;
}

// here we add a new type of contact and we assign the contact address
void Artist::updateContact(const string& type, const string& value) {
    contact[type] = value;
}

void Artist::setMainStyle(const string& style) {
    mainStyle = style;
}

// here we search a type of contact
string Artist::getContact(const string& type) const {
    auto it = contact.find(type);
    if (it != contact.end()) {
        // if we find it we return te value assigned to that type of contact
        return it ->second;
    }
    else{
        // if we dont find it we return a message
        return "No available";
    }
}