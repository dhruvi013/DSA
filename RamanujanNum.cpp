#include <bits/stdc++.h>
using namespace std;

int main(){
    int limit = 1e7;
    int maxlimit = cbrt(limit) + 1;
    vector<int> cubes(maxlimit + 1);

    for(int i=0; i<=maxlimit; i++){
        cubes[i] = i*i*i;
    }

    map<int, int> nums;
    int cnt = 0;

    for (int a = 0; a <= maxlimit; ++a) {
        for (int b = a; b <= maxlimit; ++b) {
            int sum = cubes[a] + cubes[b];
            if (sum <= limit) {
                nums[sum]++;
            }
        }
    }

    for(auto &pair : nums){
        if(pair.second >= 2){
            cout << pair.first;
            cout << endl;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}

    
