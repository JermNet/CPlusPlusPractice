#include <iostream>
//preprocessor directive
using namespace std;

int main() {
	int a, b, temp;

	cout << "Before swapping." << endl;
	cout << "Enter first integer: A" << endl;
	cin >> a;
	cout << "Enter second integer: B" << endl;
	cin >> b;

	cout << "After swapping." << endl;
	temp = a;
	a = b;
	b = temp;

	cout << "Your first integer A: " << a << endl;
	cout << "Your second integer B: " << b << endl;

}