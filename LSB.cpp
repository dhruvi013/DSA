#include <bits/stdc++.h>
using namespace std;

int lsb(int n){
    return floor(log2(n^(n&(n-1))));
}

int main(){
    int n;
    cin >> n;
    cout << lsb(n);
    cout << endl;
    auto start = std::chrono::high_resolution_clock::now();
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
    cout << duration.count() << "\n";
}



// #include <bits/stdc++.h>
// #include <chrono>
// using namespace std;

// int main(){
//     int n;
//     cout<<"input: ";
//     cin>>n;
//     int lsb = n^(n&(n-1));
//     int msb= floor(log2(lsb));
//     cout<<msb;
//     auto start = std::chrono::high_resolution_clock::now();
//     auto stop = std::chrono::high_resolution_clock::now();
//     auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
//     cout << duration.count() << "\n";
// }