#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> res(nums.size(), 1);
    int prefix = 1;

    for(int i = 0; i<nums.size(); ++i){
        res[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for(int i = nums.size()-1; i>=0; --i){
        res[i] *= suffix;
        suffix *= nums[i];
    }
    return res;
}

void print_vec(vector<int> &res)
{
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << "\t";
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

    vector<int> res = productExceptSelf(nums);
    print_vec(res);
}