#ifndef BOOK_H
#define BOOK_H
#include "author.h"
#include <string>
using namespace std;

class Book {
private:
    string name;
    Author author;
    double price;
    int numInStock;

public:
    Book(string name, Author author, double price, int numInStock) {
        this->name = name;
        this->author = author;
        this->price = price;
        this->numInStock = numInStock;
    }

    string getName() {
        return name;
    }

    Author getAuthor() {
        return author;
    }

    double getPrice() {
        return price;
    }

    int getNumInStock() {
        return numInStock;
    }

    string toString() {
        return author.toString() + name + " (" + to_string(price) + ")";
    }

    string getAuthorName() {
        return author.getName();
    }
};
#endif