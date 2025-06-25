#include <bits/stdc++.h>
using namespace std;

int chalkReplacer(vector<int>& chalk, int k) {
    int sum = 0;
    for(int i=0; i<chalk.size(); i++){
        sum += chalk[i];
        if(sum>k){
            break;
        }
    }

    k = k%sum;
    for(int i=0; i<chalk.size(); i++){
         if(k<chalk[i]){
             return i;
         }
         k -= chalk[i];
    }
    return 0;
}

int main(){
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> chalk(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> chalk[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    cout << chalkReplacer(chalk, k);


}

