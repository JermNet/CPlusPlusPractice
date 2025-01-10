#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int odd = 0;
    int even = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Enter number #" << i + 1 << ":" << endl;
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            even += numbers[i];
        }
        else {
            odd += numbers[i];
        }
    }
    cout << "Sum of even numbers: " << even << "\nSum of odd numbers: " << odd << endl;
}