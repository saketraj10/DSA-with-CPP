#include<iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter the row of matrix: ";
    cin >> r;
    cout << "Enter the col of matrix: ";
    cin >> c;

    int m[r][c];
    cout << "Enter the element of matrix: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> m[i][j];
        }
    }
    cout << endl;
    
    int temp[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            temp[i][j] = m[i][j];  // Copy elements from the original matrix to the temporary matrix
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (m[i][j] == 0) {
                // Set entire row to zero
                for (int k = 0; k < r; k++) {
                    temp[k][j] = 0;
                }
                // Set entire column to zero
                for (int l = 0; l < c; l++) {
                    temp[i][l] = 0;
                }
            }
        }
    }

    // Display the resulting matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
