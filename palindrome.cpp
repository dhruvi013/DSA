#include<iostream>
using namespace std;

bool isPalindrome(int n) {
    // Code here.
    int ans = 0;
    int temp = n;
    
    while(temp > 0){
        ans = (ans*10) + (temp%10);
        temp /= 10;
    }
        
    return ans == n;
}

int main(){
    int n;
    cin >> n;
    cout << isPalindrome(n);
}

