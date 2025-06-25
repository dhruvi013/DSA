#include <bits/stdc++.h>
using namespace std;

int cnt_bits(int n){
    // int ans = floor(log2(n)) + 1;
    int ans = 0;
    if(n<0){
        return 32;
    }
    while(n){
        n = n >> 1;
        ans++;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << cnt_bits(n);
}
