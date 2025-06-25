#include<iostream>
using namespace std;

bool isPrime(int n) {
    // code here
    if(n<2){
        return false;
    }
    if(n%2==0){
        return (n==2);
    }
    for(int i = 3;i<=n/i;i+=2){
        if(n%i == 0){
            return false;
        }
    }
    
    return true;
}

int main(){
    int n;
    cin >> n;
    cout << isPrime(n);
}

