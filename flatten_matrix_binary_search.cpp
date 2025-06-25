#include <bits/stdc++.h>
using namespace std;

pair<int, int> flatten_matrix(int m, int n, vector<vector<int>>& matrix, int target) {
    int left = 0;
    int right = m*n -1;
    
    while(left <= right){
        int mid = left + ((right-left)/2);
        int row = mid/n;
        int col = mid%n;
        int mid_val = matrix[row][col];

        if(target == mid_val){
            return {row, col};
        }
        if(target > mid_val){
            left = mid+1;
        }
        if(target < mid_val){
            right = mid-1;
        }
    }
    return {-1,-1};
}

int main() {
    int m, n, target;
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;
    cout << "Enter target: ";
    cin >> target;

    vector<vector<int>> matrix(m, vector<int>(n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> matrix[i][j];
        }
    }

    pair<int, int> res = flatten_matrix(m, n, matrix, target);
    cout << res.first << " " << res.second << " ";    
    return 0;
}