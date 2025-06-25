#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int migratoryBirds(vector<int> arr) {
    unordered_map<int, int> freq;
    for (int id : arr) {
        freq[id]++;
    }

    int maxCount = 0, birdID = INT_MAX;
    for (auto& pair : freq) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            birdID = pair.first;
        } else if (pair.second == maxCount && pair.first < birdID) {
            birdID = pair.first;
        }
    }

    return birdID;
}

int main() {
    int n;
    cout << "Enter number of bird sightings: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter bird type IDs:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = migratoryBirds(arr);
    cout << "Most frequently sighted bird ID: " << result << endl;

    return 0;
}
