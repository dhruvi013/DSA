#include<iostream>
using namespace std;

int Euclidean_GCD(int a, int b){
    if(b == 0){
        return a;
    }

    return Euclidean_GCD(b, a%b);   
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << Euclidean_GCD(a, b);
}