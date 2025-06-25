#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int curr = 0;
    for(int x : nums){
        if(x != 0){
            nums[curr] = x;
            curr++;
        }
        }
        while(curr < nums.size()){
            nums[curr] = 0;
            curr++;
    }
}

void print_vec(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << "\t";
    }
    cout << "\n";
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

    moveZeroes(nums); 
    cout << "vector:\n";
    print_vec(nums);  

    return 0;
}
