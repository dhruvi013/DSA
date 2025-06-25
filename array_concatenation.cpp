#include <bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    for(int i=0; i<n; i++){
        ans.push_back(nums[i]);
    }
    for(int i=0; i<n; i++){
       ans.push_back(nums[i]);
    }
    return ans;
}

void print_vec(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << "\t";
    }
    cout << "\n";
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

    vector<int> result = getConcatenation(nums);
    cout << "Concatenated vector:\n";
    print_vec(result);

    return 0;

}

