#include <string>
#include <map>

#ifndef ARTIST_H
#define ARTIST_H
using namespace std;

class Artist {
    private:
        string firstName, lastName, birthDate, nationality, mainStyle, biography;
        // map is used to assign pairs of related values for example "email -> artist_email.com"
        map<string, string> contact;

    public:
        Artist(string firstName, string lastName, string birthDay, string nationality, string style, string biography);
        string getFullName() const;
        // we use the type of the contact(email, instagram...) and the value of it
        void updateContact(const string& type, const string& value);
        // we use this method to change the principal style of the artist
        void setMainStyle(const string& style);
        // we use this method to get a specific type of contact of the artist
        string getContact(const string& type) const;
};

#endif
