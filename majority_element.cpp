#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int, int> freq;
    for(int x : nums){
        freq[x]++;
    }

    int maxfreq  = freq[nums[0]];
    int mode = nums[0];
    for(auto pair : freq){
        if(pair.second > maxfreq){
            maxfreq = pair.second;
            mode = pair.first;
        }

    }
    return mode;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << majorityElement(nums);

}