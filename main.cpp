#include <iostream>
#include <vector>
#include "include/Artist.h"
#include "include/Artwork.h"
#include "include/Buyer.h"
#include "include/Product.h"
#include "include/Sticker.h"
#include "include/Drawing.h"
#include "include/Button.h"
#include "include/Pin.h"

using namespace std;

int main() {
    string firstName, lastName, birthDate, nationality, style, bio;

    // artist 
    cout << "Enter Artist Details\n";
    cout << "First Name: "; getline(cin, firstName);
    cout << "Last Name: "; getline(cin, lastName);
    cout << "Birth Date: "; getline(cin, birthDate);
    cout << "Nationality: "; getline(cin, nationality);
    cout << "Main Style: "; getline(cin, style);
    cout << "Biography: "; getline(cin, bio);

    Artist artist(firstName, lastName, birthDate, nationality, style, bio);

    artist.updateContact("email", "daniela@example.com");
    artist.updateContact("instagram", "@daniela_art");

    // Show the contacts
    cout << "\nArtist Contact Information:" << endl;
    cout << "Email: " << artist.getContact("email") << endl;
    cout << "Instagram: " << artist.getContact("instagram") << endl;


    // artwork 
    string id, title, type, dimensions, status, location, description;
    int year;
    float price;
    int materialCount;
    vector<string> materials;

    cout << "\nEnter Artwork Details\n";
    cout << "ID: "; getline(cin, id);
    cout << "Title: "; getline(cin, title);
    cout << "Year: "; cin >> year; cin.ignore();
    cout << "Type: "; getline(cin, type);
    cout << "How many materials? "; cin >> materialCount; cin.ignore();
    for (int i = 0; i < materialCount; ++i) {
        string material;
        cout << "Material " << i+1 << ": ";
        getline(cin, material);
        materials.push_back(material);
    }
    cout << "Dimensions: "; getline(cin, dimensions);
    cout << "Status: "; getline(cin, status);
    cout << "Price: "; cin >> price; cin.ignore();
    cout << "Location: "; getline(cin, location);
    cout << "Description: "; getline(cin, description);

    Artwork artwork(id, title, type, dimensions, status, location, description, year, price, &artist, materials);

    // show the details of the artwork
    cout << artwork.showDetails();

    // buyer 
    string buyerFirst, buyerLast, address, notes;
    cout << "\nEnter Buyer Details\n";
    cout << "First Name: "; getline(cin, buyerFirst);
    cout << "Last Name: "; getline(cin, buyerLast);
    cout << "Address: "; getline(cin, address);
    cout << "Notes: "; getline(cin, notes);

    Buyer buyer(buyerFirst, buyerLast, address, notes);
    buyer.addPurchasedArtwork(&artwork);

    cout << "\nPurchase Recorded!\n";
    cout << buyer.showPurchaseHistory();
    

    // product 
    vector<Product*> products;
    int numProducts;
    cout << "\nHow many products to add (stickers, drawings, etc.)? ";
    cin >> numProducts; cin.ignore();

    for (int i = 0; i < numProducts; ++i) {
        string prodType, prodId, name, desc;
        float prodPrice;
        int stock;

        cout << "\nProduct " << i + 1 << " type (sticker/drawing/button/pin): ";
        getline(cin, prodType);
        cout << "ID: ";
        getline(cin, prodId);
        cout << "Name: ";
        getline(cin, name);
        cout << "Description: ";
        getline(cin, desc);
        cout << "Price: ";
        cin >> prodPrice; cin.ignore();
        cout << "Stock: ";
        cin >> stock; cin.ignore();

        if (prodType == "sticker") {
            products.push_back(new Sticker(prodId, name, desc, prodPrice, stock));
        } else if (prodType == "drawing") {
            products.push_back(new Drawing(prodId, name, desc, prodPrice, stock));
        } else if (prodType == "button") {
            products.push_back(new Button(prodId, name, desc, prodPrice, stock));
        } else if (prodType == "pin") {
            products.push_back(new Pin(prodId, name, desc, prodPrice, stock));
        } else {
            cout << "Unknown type. Skipping.\n";
        }
    }

    // show product info
    cout << "\n-------- Product Information: --------\n";
    for (auto p : products) {
        cout << p->showInfo() << "\n";
    }
    system("pause");
    return 0;
}
