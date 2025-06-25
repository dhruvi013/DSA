#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = 0, col = matrix[0].size() - 1;
    while (row < matrix.size() && col >= 0) {
        if (matrix[row][col] == target) {
            return true;
        } else if (matrix[row][col] > target) {
            col--;
        } else {
            row++;
        }
    }
    return false;
}

int main() {
    int rows, cols, target;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter matrix elements (each row in sorted order):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter target to search: ";
    cin >> target;

    if (searchMatrix(matrix, target)) {
        cout << "Target found in the matrix.\n";
    } else {
        cout << "Target not found in the matrix.\n";
    }

    return 0;
}
