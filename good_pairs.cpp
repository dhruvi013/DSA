#include <bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    int cnt = 0;
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<i; j++){
            if(nums[i] == nums[j]){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << numIdenticalPairs(nums);

    return 0;

}

