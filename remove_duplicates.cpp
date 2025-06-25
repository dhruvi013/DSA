#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] == nums[j]) {
                nums.erase(nums.begin() + j);
                --j; 
            }
        }
    }
    return nums.size();
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int newSize = removeDuplicates(nums);

    cout << "Array after removing duplicates:\n";
    for(int i = 0; i < newSize; ++i) {
        cout << nums[i] << " ";
    }
    cout << "\nSize after removing duplicates: " << newSize << endl;

    return 0;
}
