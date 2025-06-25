#include<iostream>
using namespace std;

int smallestEvenMultiple(int n) {
    if(n%2 == 0){
        return n;
    }
    else{
        return 2 * n;
    }
}

int main(){
    int n;
    cin >> n;
    cout << smallestEvenMultiple(n);
}

