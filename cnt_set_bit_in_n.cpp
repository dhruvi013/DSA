#include <bits/stdc++.h>
using namespace std;

int cntSetBit(int n){
    int cnt = 0;
    for(int i=1; i<=n; i++){
        int x = i;
        while(x){
            if((x & 1) == 1) cnt++;
            x >>= 1;
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    cout << cntSetBit(n);
    return 0;
}