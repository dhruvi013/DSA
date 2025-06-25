#include <bits/stdc++.h>
using namespace std;


void merge_vector(vector<int> &a, vector<int> &b){
    a.insert(a.end(), b.begin(), b.end());

    for(int x : a){
        cout << x << " ";
    }
}

int main(){
    vector<int> a = {4,6,9,2,8,4};
    merge_vector(a, b);
}

