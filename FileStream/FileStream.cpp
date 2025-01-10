#include <iostream>
#include <fstream>
using namespace std;

int main() {
    /*string read;
    ofstream ABC("ABC.txt");
    ABC << "Hello World";
    ABC.close();

    ifstream READABC("ABC.txt");
    while (getline(READABC, read)) {
      cout << read << endl;
    }
    READABC.close();*/

    double num1, num2, result;
    cout << "Please enter number 1" << endl;
    cin >> num1;
    cout << "Please enter number 2" << endl;
    cin >> num2;
    try {
        if (num2 == 0) {
            throw "Error! Divide by zero!";
        }
        result = num1 / num2;
        cout << num1 << " / " << num2 << " = " << result << endl;
    }
    catch (const char* message) {
        cout << message << endl;
    }
}