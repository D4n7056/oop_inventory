#include <iostream>
#include <vector>
#include "Artist.h" 

#ifndef ARTWORK_H
#define ARTWORK_H

using namespace std;

class Artwork {
    private:
        string id, title, type, dimensions, status, location, description;
        int year;
        float price;
        // here we define the author of the artwork
        Artist* artist;
        // we assign the materials used in the artwork
        vector<string> materials;

    public:
        Artwork(string _id, string _title, string _type, string _dimensions, string _status, string _location, 
            string _description, int _year, float _price, Artist* _artist, vector<string> _materials);
        void markAsSold(float finalPrice);
        void updatePrice(float newPrice);
        void changeStatus(const string& newStatus);
        void changeLocation(const string& newLocation);
        string showDetails() const;
        
        string getTitle();
        Artist* getArtist() const;

        // we use the operator == to compare if two artworks are the same
        bool operator ==(const Artwork& other) const;
};

#endif
