#include <bits/stdc++.h>
using namespace std;

string balancedSums(vector<int> arr) {
    int totalSum = accumulate(arr.begin(), arr.end(), 0);
    int leftSum = 0;

    for (int i = 0; i < (arr.size()/2) + 1 ; i++) {
        if (leftSum == totalSum - leftSum - arr[i]) {
            return "YES";
        }
        leftSum += arr[i];
    }

    return "NO";
}

int main() {

        int n;
        cout << "\nEnter number of elements in the array: ";
        cin >> n;

        vector<int> arr(n);
        cout << "Enter " << n << " elements:\n";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        string result = balancedSums(arr);
        cout << "Result: " << result << "\n";

    return 0;
}