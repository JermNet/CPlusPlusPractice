#include <iostream>
//preprocessor directive
using namespace std;
int main() {
    double length, width, area, perimeter;;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    area = length * width;
    perimeter = (2 * length) + (2 * width);

    cout << "Area is " << area << endl;
    cout << "Perimeter is " << perimeter << endl;


}
