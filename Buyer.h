#include <string>
#include <vector>
#include <map>
#include "Artwork.h"

#ifndef BUYER_H
#define BUYER_H

using namespace std;

class Buyer {

    private:
        string firstName, lastName, address, notes;
        map<std::string, std::string> contact;
        vector<Artwork*> purchasedArtworks;

    public:
        Buyer(string _firstName, string _lastName, string _address, string _note);
        // we use method overloading to allow adding either a single artwork or multiple artworks at once
        void addPurchasedArtwork(Artwork* artwork);
        void addPurchasedArtwork(vector<Artwork*> artwork);
        // here we use map as we do it in Artist 
        void updateContact(const string& type, const string& value);
        string showPurchaseHistory() const;
        std::string getFullName() const;
};


#endif
