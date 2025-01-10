#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numberOfNumbers, largestNumber;
    cout << "How many numbers will you be entering?" << endl;
    cin >> numberOfNumbers;

    vector<int> numbers(numberOfNumbers);

    for (int i = 0; i < numberOfNumbers; i++) {
        cout << "Enter number " << i + 1 << ": " << endl;
        cin >> numbers[i];
    }

    largestNumber = numbers[0];
    for (int i = 1; i < numberOfNumbers; i++) {
        if (numbers[i] > largestNumber) {
            largestNumber = numbers[i];
        }
    }

    cout << "The largest number is " << largestNumber << endl;

    return 0;
}
