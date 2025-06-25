#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> freq;
    for(int x : arr){
        freq[x]++;
    }

    unordered_set<int> cnt;
    for(auto pair : freq){
        if(cnt.count(pair.second)){
            return false;
        }
        cnt.insert(pair.second);
}
    return true;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << uniqueOccurrences(arr);

}