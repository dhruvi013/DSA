#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    bool canPlaceBalls(int x, vector<int> &position, int m) {
        int prevBallPos = position[0];
        int ballsPlaced = 1;

        for (int i = 1; i < position.size() && ballsPlaced < m; ++i) {
            int currPos = position[i];
            if (currPos - prevBallPos >= x) {
                ballsPlaced += 1;
                prevBallPos = currPos;
            }
        }
        return ballsPlaced == m;
    }

    int maxDistance(vector<int> &position, int m) {
        int answer = 0;
        int n = position.size();
        sort(position.begin(), position.end());

        int low = 1;
        int high = position[n - 1] - position[0];

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canPlaceBalls(mid, position, m)) {
                answer = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return answer;
    }
};

int main() {
    int n, m;
    cout << "Enter number of positions: ";
    cin >> n;

    vector<int> position(n);
    cout << "Enter positions: ";
    for (int i = 0; i < n; i++) {
        cin >> position[i];
    }

    cout << "Enter number of balls to place: ";
    cin >> m;

    Solution sol;
    int result = sol.maxDistance(position, m);
    cout << "Maximum minimum distance to place balls: " << result << endl;

    return 0;
}
