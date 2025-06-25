#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &v, int target, int left, int right){
    int mid = left + (right - left) / 2;
    if (left > right){
        return -1; 
    }
    if(target == v[mid]){
        return mid;
    }
    if(target > v[mid]){
        return binary_search(v, target, mid+1, right);
    }
    if(target < v[mid]){
        return binary_search(v, target, left, mid-1);
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int target; cin >> target;

    cout << binary_search(v, target, 0, n-1);
}