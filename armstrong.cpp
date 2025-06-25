#include<iostream>
using namespace std;

bool armstrongNumber(int n) {
    // code here
    int temp = n;
    int ans = 0;
    while(temp > 0){
        int rem = temp%10;
        ans = ans + (rem * rem * rem);
        temp = temp/10;
    }
    return ans == n;
}

int main(){
    int n;
    cin >> n;
    cout << armstrongNumber(n);
}

