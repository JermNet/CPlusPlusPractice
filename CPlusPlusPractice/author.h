#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>
using namespace std;

class Author {
private:
    string name, email;
    char gender;

public:
    // Default constructor
    Author() {
        name = "";
        email = "";
        gender = 'F';
    }

    Author(string name, string email, char gender) {
        this->name = name;
        this->email = email;
        this->gender = gender;
    }

    string getName() {
        return name;
    }
    string getEmail() {
        return email;
    }

    char getGender() {
        return gender;
    }

    void setName(string name) {
        this->name = name;
    }

    void setEmail(string email) {
        this->email = email;
    }

    void setGender(char gender) {
        this->gender = gender;
    }

    string toString() {
        return name + " " + gender + " at " + email;
    }
};
#endif
