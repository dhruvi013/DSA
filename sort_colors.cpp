#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++){
        for(int j = i+1; j<nums.size(); j++){
            if(nums[i] > nums[j]){
                swap(nums[i], nums[j]);
            }
        }
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

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sortColors(nums);
    print_vec(nums);

}

