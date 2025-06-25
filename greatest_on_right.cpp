#include <iostream>
#include <vector>
using namespace std;

vector<int> replaceElements(vector<int>& arr) {
     // vector<int> ans(arr.size());
     // for(int i=0; i<arr.size(); i++){
     //     if(i == arr.size()-1){
     //         ans[i] = -1;
     //         break;
     //     }
     //     int max_ele = 0;
     //     for(int j=i+1; j<arr.size(); j++){
     //         max_ele = max(max_ele, arr[j]);
     //     }
     //     ans[i] = max_ele;
     // }
     // return ans;
     int max_right = -1;
     for(int i = arr.size()-1; i>=0; --i){
         int curr = arr[i];
         arr[i] = max_right;
         max_right = max(curr, max_right);
     }
     return arr;
 }

void print_vec(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n";
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    vector<int> res = replaceElements(arr);
    print_vec(res);
}