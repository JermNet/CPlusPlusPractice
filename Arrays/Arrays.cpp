#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a[10][10], b[10][10], sum[10][10], i, j;
    int r = 3;
    int c = 3;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << "Enter element " << i + 1 << j + 1 << ": " << endl;
            cin >> a[i][j];
        }
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << "Enter element " << i + 1 << j + 1 << ": " << endl;
            cin >> b[i][j];
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}