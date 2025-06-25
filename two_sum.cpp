#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> v;
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums[i]+nums[j] == target){
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    return v;
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
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;


    vector<int> result = twoSum(nums, target);
    cout << "Two sum vector:\n";
    print_vec(result);

    return 0;

}

