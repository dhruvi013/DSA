#include<iostream>
using namespace std;

int seriesSum(int n) {
    // code here
    int sum = 0;
    for(int i=0; i<=n; i++){
        sum += i;
    }
    
    return sum;
}

int main(){
    int n;
    cin >> n;
    cout << seriesSum(n);
}

