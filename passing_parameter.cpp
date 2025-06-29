#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> *v){
    for(int x : *v){
        cout << x;
    }
} 

int main() {
    vector<int> v(5, 2);
    printVec(&v);
}