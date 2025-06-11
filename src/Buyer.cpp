#include "../include/Buyer.h"
#include <iostream>

using namespace std;

Buyer::Buyer(string _firstName, string _lastName, string _address, string _notes)
    : firstName(_firstName), lastName(_lastName), address(_address), notes(_notes) {}

void Buyer::addPurchasedArtwork(Artwork* artwork) {
    purchasedArtworks.push_back(artwork);
}

void Buyer::addPurchasedArtwork(vector<Artwork*> artworks) {
    for (auto a : artworks) {
        purchasedArtworks.push_back(a);
    }
}

void Buyer::updateContact(const string& type, const string& value) {
    contact[type] = value;
}

string Buyer::showPurchaseHistory() const {
    string result = "Purchase history of " + getFullName() + ":\n";
    for (const auto& artwork : purchasedArtworks) {
        result += "- " + artwork->getTitle() + " by " +
                  (artwork->getArtist() ? artwork->getArtist()->getFullName() : "Unknown") + "\n";
    }
    return result + "\n";
}


string Buyer::getFullName() const {
    return firstName + " " + lastName;
}
