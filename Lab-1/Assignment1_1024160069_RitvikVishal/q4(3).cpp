#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and cols of matrix: ";
    cin >> r >> c;

    int mat[r][c], trans[c][r];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat[i][j];


    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            trans[j][i] = mat[i][j];

    cout << "Transpose:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            cout << trans[i][j] << " ";
        cout << "\n";
    }

    return 0;
}

