#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int>> vvi;

pair<int, int> optimized_binary_search(int n, int m, vvi &v, int target){
    int row = 0;
    int col = m - 1;

    while(row < n && col >= 0){
        int curr = v[row][col];

        if(curr == target){
            return {row, col};
        }
        if(curr > target){
            col--;
        }
        if(curr < target){
            row++;
        }
    }
    return {-1, -1};
}

int main(){
    int n, m, target;
    cout << "Enter number of rows (n): ";
    cin >> n;
    cout << "Enter number of columns (m): ";
    cin >> m;
    cout << "Enter target: ";
    cin >> target;

    vvi v(n, vector<int>(m));
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> v[i][j];
        }
    }

    pair<int, int> res = optimized_binary_search(n, m, v, target);
    cout << res.first << " " << res.second << " ";
    return 0;
}