#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int mx = 0;
    int mi = INT_MAX;
    for(int i = 0; i < prices.size(); i++) {
        mi = min(prices[i], mi);
        mx = max(mx, prices[i]-mi);
    }
    return mx;
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << maxProfit(prices);

}

