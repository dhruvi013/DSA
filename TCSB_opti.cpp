#include <bits/stdc++.h>
using namespace std;

int largestPowerOf2(int n){
    int x = log2(n);
    return x;
}

int tcsb(int n){
    if(n == 0) return 0;
    int x = largestPowerOf2(n);

    int setBits = x * (1 << (x-1));
    int msb = n - (1 << x) + 1;
    int restNum = tcsb(n - (1 << x));

    return setBits + msb + restNum;
}

int main(){
    int n;
    cin >> n;
    cout << tcsb(n);
}