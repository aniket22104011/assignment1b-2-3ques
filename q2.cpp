#include <iostream>
#include <vector>

using namespace std;

// Function to print a matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

// Function to calculate the transpose of a matrix
vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<int>> transposed(cols, vector<int>(rows));
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
    
    return transposed;
}

int main() {
    int rows, cols;

    // Read matrix dimensions
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Initialize matrix
    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Read matrix elements
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element at (" << i << "," << j << "): ";
            cin >> matrix[i][j];
        }
    }

    // Calculate transpose
    vector<vector<int>> transposed = transposeMatrix(matrix);

    // Print original matrix
    cout << "Original matrix:\n";
    printMatrix(matrix);

    // Print transposed matrix
    cout << "Transposed matrix:\n";
    printMatrix(transposed);

    return 0;
}
