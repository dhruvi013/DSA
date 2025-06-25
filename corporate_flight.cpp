#include <bits/stdc++.h>
using namespace std;

vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
    vector<int> ans(n, 0);  

    for (auto& booking : bookings) {
        int start = booking[0] - 1;  
        int end = booking[1];        
        int seats = booking[2];
        ans[start] += seats;
        if (end < n) {
            ans[end] -= seats;
        }
    }

    for (int i = 1; i < n; ++i) {
        ans[i] += ans[i - 1];
    }

    return ans;
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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> bookings(n, vector<int>(3));  

    for (int i = 0; i < n; i++) {
        cin >> bookings[i][0] >> bookings[i][1] >> bookings[i][2];
    }

    vector<int> res = corpFlightBookings(bookings, m);
    print_vec(res);
}