#include <string>
#include <map>

#ifndef ARTIST_H
#define ARTIST_H
using namespace std;

class Artist {
    private:
        string firstName, lastName, nationality, mainStyle, biography;
        string birthDate;
        map<string, string> contact;

    public:
        Artist(string fn, string ln, string birth, string nat, string style, string bio);
        string getFullName() const;
        void updateContact(const string& type, const string& value);
};

#endif
