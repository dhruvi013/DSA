#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int>& piles){
    int maxele = 0;
    for(int i = 0; i<piles.size(); i++){
        maxele = max(maxele, piles[i]);
    }
    return maxele;
}

long long calTotalHours(vector<int>& piles, long long mid){
    long long totHour = 0;
    for(int i = 0; i<piles.size(); i++){
        // totHour += ceil((double)piles[i] / (double)mid);
        totHour += (piles[i] + mid - 1) / mid;  // fast integer ceil
    }
    return totHour;
}

int minEatingSpeed(vector<int>& piles, int h) {
    long long low = 1, high = findMax(piles);
    while(low <= high){
        long long mid = low + (high - low) / 2;
        if(calTotalHours(piles, mid) <= h){
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    int n;
    cin >> n;
    vector<int> piles(n);
    int h;

    for(int i=0; i<n; i++){
        cin >> piles[i];
    }

    cin >> h;
    cout << minEatingSpeed(piles, h);
}

