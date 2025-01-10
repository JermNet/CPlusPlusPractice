#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: " << endl;
    cin >> rows >> cols;

    
    vector<vector<int>> original(rows, vector<int>(cols));
    vector<vector<int>> transpose(cols, vector<int>(rows));

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter row " << i + 1 << " column " << j + 1 << ": " << endl;
            cin >> original[i][j];
        }
    }


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = original[i][j];
        }
    }

    
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << original[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
