#include<iostream>
using namespace std;

int alternateDigitSum(int n) {
    int sum = 0; 
    int sign = 1; 
    int temp;
    while(n>0){
        temp = n%10;
        sign *= -1;
        
        sum += temp*sign;
        n /= 10;
    }
    return sum*sign;
}

int main(){
    int n;
    cin >> n;
    cout << alternateDigitSum(n);
}

