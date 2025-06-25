#include <bits/stdc++.h>
using namespace std;

int bad = 4; 
bool isBadVersion(int version) {
    return version >= bad;
}

int firstBadVersion(int n) {
    int low = 1;
    int high = n;
    int ans = 0;

    while(low <= high){
        int mid = low + (high - low) / 2;
        if(isBadVersion(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of versions: ";
    cin >> n;

    int result = firstBadVersion(n);
    cout << "First bad version is: " << result << endl;

    return 0;
}
