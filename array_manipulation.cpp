#include <iostream>
#include <vector>
using namespace std;

long performArrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> ans(n + 2, 0); // One extra element for safe indexing

    for (auto &query : queries) {
        int a = query[0];
        int b = query[1];
        int k = query[2];

        ans[a] += k;
        ans[b + 1] -= k;
    }

    long max_val = 0, current = 0;
    for (int i = 1; i <= n; i++) {
        current += ans[i];
        max_val = max(max_val, current);
    }

    return max_val;
}

int main() {
    int n, m;
    cout << "Enter array size (n): ";
    cin >> n;
    cout << "Enter number of queries (m): ";
    cin >> m;

    vector<vector<int>> queries(m, vector<int>(3));
    cout << "Enter each query in the format: a b k\n";
    for (int i = 0; i < m; i++) {
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
    }

    long result = performArrayManipulation(n, queries);
    cout << "Maximum value after all operations: " << result << endl;

    return 0;
}
