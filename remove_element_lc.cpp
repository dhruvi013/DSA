#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    for(int i=0; i<nums.size(); ){
        if(nums[i] == val){
            nums.erase(nums.begin() + i);
        }
        else{
            i++;
        }
    }
    return nums.size();
}


int main(){
    int n, val;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter val: ";
    cin >> val;

    cout << removeElement(nums, val);


}

