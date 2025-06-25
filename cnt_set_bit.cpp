#include <bits/stdc++.h>
using namespace std;

int cnt_set_bits(int n){
    // int ans = floor(log2(n)) + 1;
    int ans = 0;
    if(n<0){
        return 32;
    }
    while(n){
         if(n & 1 == 1){
            ans++;
         }
        n = n >> 1;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << cnt_set_bits(n);
}
