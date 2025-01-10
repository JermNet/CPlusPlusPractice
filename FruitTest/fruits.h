#include <string>
using namespace std;

class Fruits {
private:
    string name, eatingBenefits, brand;
    int price;

public:
    Fruits(string n, string b, string br, double pr) {
        name = n;
        eatingBenefits = b;
        brand = br;
        price = pr;
    }
    string getName() {
        return name;
    }
    string getEatingBenefits() {
        return eatingBenefits;
    }
    string getBrand() {
        return brand;
    }
    double getPrice() {
        return price;
    }
};