
#include "../include/Artwork.h"
#include <iostream>

using namespace std;

Artwork::Artwork (string _id, string _title, string _type, string _dimensions, string _status, string _location, 
            string _description, int _year, float _price, Artist* _artist, vector<string> _materials)
            : id(_id),title(_title), type(_type), dimensions(_dimensions), status(_status), location(_location),
            description(_description), year(_year), price(_price), artist(_artist), materials(_materials){}

void Artwork::markAsSold(float finalPrice) {
    status = "sold";
    price = finalPrice;
}

void Artwork::updatePrice(float newPrice) {
    price = newPrice;
}

void Artwork::changeStatus(const string& newStatus) {
    status = newStatus;
}

void Artwork::changeLocation(const string& newLocation) {
    location = newLocation;
}

 
string Artwork::showDetails() const {
    return "Title: " + title + 
    // we use the pointer to call the method of getFullName
    "\nArtist: " + (artist ? artist->getFullName() : "Unknown") +
    "\nType: " + type + 
    "\nStatus: " + status + 
    // for price we have to change the type of float to string 
    "\nPrice: $" + to_string(price) + 
    "\nLocation: " + location + "\n\n";
};

string Artwork::getTitle(){
    return title;
};
  
Artist* Artwork::getArtist() const {
    return artist;
}

// here we compare the two artworks by the id
// this is useful to know if two objects represent the same artwork
bool Artwork::operator==(const Artwork& other) const {
    return id == other.id;
}
