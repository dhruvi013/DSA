// #include <bits/stdc++.h>
// using namespace std;

// void primeFactorization(int n){
//     map<int, int> freq;
      
//     while (n % 2 == 0) {
//         freq[2]++;
//         n /= 2;
//     }
//     for (int i = 3; i  <= n/i; i += 2) {
        
//         while (n % i == 0) {
//             freq[i]++;
//             n /= i;
//         }
//     }
//     if (n > 2)
//         freq[n]++;

//     for(auto pair : freq){
//         cout << pair.first << " : " << pair.second;
//         cout << endl; 
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     primeFactorization(n);
// }

#include <iostream>
using namespace std;

void primeFactorization(long long n) {
    for (long long i = 2; i * i <= n; ++i) {
        int count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count > 0) {
            cout << i << "^" << count << " ";
        }
    }
    // If remaining n > 1, it's a prime factor
    if (n > 1) {
        cout << n << "^1";
    }
    cout << endl;
}

int main() {
    long long n;
    cout << "Enter number: ";
    cin >> n;
    primeFactorization(n);
    return 0;
}
