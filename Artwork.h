#include <string>
#include <vector>
#include "Artist.h" 

#ifndef ARTWORK_H
#define ARTWORK_H

class Artwork {
    public:
        string id, title, type, dimensions, status, location, description;
        string creationYear, acquisitionDate;
        float salePrice = 0.0;
        Artist* artist = nullptr;
        vector<std::string> materials;

        void markAsSold(float finalPrice);
        void updatePrice(float newPrice);
        void changeStatus(const string& newStatus);
        void changeLocation(const string& newLocation);
        string showDetails() const;
};

#endif