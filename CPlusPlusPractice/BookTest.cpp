#include <iostream>
#include "book.h"
using namespace std;

int main() {
    Author author("Joe", "joe@joemail.com", 'M');
    Book book("Very good book", author, 12.22, 2);

    cout << book.getAuthorName();
}