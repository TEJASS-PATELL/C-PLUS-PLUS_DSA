#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to rotate a square matrix 90 degrees anti-clockwise in place
void rotate90AntiClockwise(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if (n == 0 || matrix[0].size() != n) {
        cerr << "Error: Rotation only works for square matrices." << endl;
        return;
    }

    // Step 1: Transpose the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step 2: Reverse each column
    for (int j = 0; j < n; ++j) {
        for (int i = 0, k = n - 1; i < k; ++i, --k) {
            swap(matrix[i][j], matrix[k][j]);
        }
    }
}

int main() {
    // Example square 2D vector
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Rotate the matrix 90 degrees anti-clockwise in place
    rotate90AntiClockwise(matrix);

    // Print the rotated matrix
    cout << "Matrix after 90-degree anti-clockwise rotation:" << endl;
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}