#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findGCDHelper(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCDHelper(b, a % b);
}

int findGCD(vector<int>& nums) {
    int maxele = INT_MIN, minele = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
        maxele = max(maxele, nums[i]);
        minele = min(minele, nums[i]);
    }
    cout << "Max: " << maxele << ", Min: " << minele << endl;
    return findGCDHelper(minele, maxele);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int gcd = findGCD(nums);
    cout << "GCD of min and max elements: " << gcd << endl;

    return 0;
}
