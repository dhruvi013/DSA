#include <bits/stdc++.h>
using namespace std;

void printMatrix(int m, int n, vector<vector<int>>& matrix) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            matrix[i][j] = i * n + j + 1;  // Formula: (i * n + j + 1) gives 1,2,3,4,5,6...
        }
    }
    
    cout << "\nThe matrix is:" << endl;
    for(const auto& row : matrix) {
        for(const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

void vertical_matrix(int m, int n, vector<vector<int>>& matrix){
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < m; i++) {
            matrix[i][j] = i + (j * m) + 1;  // Formula for vertical filling
        }
    }
    
    cout << "\nThe vertical matrix is:" << endl;
    for(const auto& row : matrix) {
        for(const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;
    
    vector<vector<int>> matrix(m, vector<int>(n));
    printMatrix(m, n, matrix);
    vertical_matrix(m, n, matrix);

    
    return 0;
}