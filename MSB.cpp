#include <bits/stdc++.h>
using namespace std;

int lsb(int n){
    return floor(log2(n));
}

int main(){
    int n;
    cin >> n;
    cout << lsb(n);
}