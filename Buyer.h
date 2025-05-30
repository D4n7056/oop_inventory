
#include <string>
#include <vector>
#include <map>
#include "Artwork.h"


#ifndef CUSTOMER_H
#define CUSTOMER_H


class Buyer {
private:
    string firstName, lastName, address, notes;
    map<std::string, std::string> contact;
    vector<Artwork*> purchasedArtworks;

public:
    Buyer(string fn, string ln, string addr);

    void addArtwork(Artwork* artwork);
    void updateContact(const string& type, const string& value);
    void showPurchaseHistory() const;
    std::string getFullName() const;
};


#endif