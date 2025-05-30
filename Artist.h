#include <string>
#include <map>

#ifndef ARTIST_H
#define ARTIST_H
using namespace std;

class Artist {
public:
    string firstName, lastName, nationality, mainStyle, biography;
    string birthDate;
    map<string, string> contact;

    string getFullName() const;
    void updateContact(const string& type, const string& value);
};

#endif
