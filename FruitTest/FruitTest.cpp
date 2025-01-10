#include <iostream>
#include "fruits.cpp"
using namespace std;

int main() {
	Fruits fruits("Apple", "Strong teeth", "Apple brand", 12.12);

	cout << fruits.getName() << endl;
	cout << fruits.getEatingBenefits() << endl;
	cout << fruits.getBrand() << endl;
	cout << fruits.getPrice() << endl;
}