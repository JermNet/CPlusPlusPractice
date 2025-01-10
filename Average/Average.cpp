#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numberOfNumbers;
    double average = 0;

    cout << "How many numbers do you want to average?" << endl;
    cin >> numberOfNumbers;

    vector<double> numbers(numberOfNumbers);

    for (int i = 0; i < numberOfNumbers; i++) {
        cout << "Please enter number " << i + 1 << ": " << endl;
        cin >> numbers[i];
        average += numbers[i];
    }

    average /= numberOfNumbers;

    for (int i = 0; i < numberOfNumbers; i++) {
        cout << "You entered " << numbers[i] << endl;
    }

    cout << "Average is " << average << endl;

    return 0;
}
