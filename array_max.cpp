#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max_arr = a[0];
    for (int i = 0; i < n; i++)
    {
        // if (a[i] > max_arr)
        // {
        //     max_arr = a[i];
        // }
        max_arr = max(a[i], max_arr);
    }
    cout << max_arr << "\n";
}