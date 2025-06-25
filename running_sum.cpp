#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    vector<int> runningSum;
    int curr = 0; 

    for(int x : nums){
        curr += x;
        runningSum.push_back(curr);
    }
    return runningSum;
}

void print_vec(vector<int> &runningSum)
{
    for (int i = 0; i < runningSum.size(); i++)
    {
        cout << runningSum[i] << "\t";
    }
    cout << "\n";
}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    vector<int> res = runningSum(nums);
    print_vec(res);
}