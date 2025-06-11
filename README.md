# Inventory for artists
## The problem
For many artists, managing a growing number of products—such as original artwork, prints, commissions, and merchandise—can quickly become overwhelming. Without a clear system for managing inventory, it's easy to lose track of availability, oversell items, or struggle to manage product variations. This disorganization not only causes stress and inefficiencies, but also takes time away from the creative process and can lead to missed sales opportunities.

![Inventory](https://github.com/user-attachments/assets/99f1e377-025f-46b5-ad78-552e1d5b1ebe)

## Project description
This project is a basic object-oriented program designed to manage an art gallery. It allows users to:

* Register artists with their personal details and contact information.
* Add artworks with full descriptions, prices, and materials used.
* Register buyers and record artwork purchases.
* Add and display various art-related products (like stickers, drawings, pins, and buttons).
* Display product details and artist contact info.
The system uses classes, inheritance, aggregation, and composition to model "real-world relationships" between artists, artworks, buyers, and products.

## Proposed solution

The solution uses object-oriented programming to simulate the core operations of an art gallery. Key classes include Artist, Artwork, Buyer, and Product (with subclasses like Sticker, Drawing, Button, and Pin).

* The Artist class stores personal and artistic details and allows updating contact info.

* The Artwork class is associated with an Artist (composition) and includes full metadata like title, materials, price, and status.

* The Buyer class can register purchases and display purchase history.

* The Product class and its subclasses support polymorphism to handle various product types and display details dynamically.

## How to use the program 
1. Run the program
2. Enter the information (for artist)
3. Enter the information (for the artwork)
4. Enter the information (for buyer)
5. Add the products
6. View the display in the terminal
