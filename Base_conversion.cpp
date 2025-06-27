#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<string> convert(int a, int b, int c, string d) {
        vector<string> res;

        // Convert a (decimal to binary)
        string bin = "";
        int tempA = a;
        if (tempA == 0) bin = "0";
        while (tempA > 0) {
            bin += (tempA % 2) + '0';
            tempA /= 2;
        }
        reverse(bin.begin(), bin.end());
        res.push_back(bin);

        // Convert b (binary number to decimal)
        int decB = 0, base = 1;
        int tempB = b;
        while (tempB > 0) {
            int lastDigit = tempB % 10;
            decB += lastDigit * base;
            base *= 2;
            tempB /= 10;
        }
        res.push_back(to_string(decB));

        // Convert c (decimal to hexadecimal)
        string hex = "";
        int tempC = c;
        if (tempC == 0) hex = "0";
        while (tempC > 0) {
            int rem = tempC % 16;
            if (rem < 10)
                hex += (rem + '0');
            else
                hex += (rem - 10 + 'A');
            tempC /= 16;
        }
        reverse(hex.begin(), hex.end());
        res.push_back(hex);

        // Convert d (hexadecimal to decimal)
        int decD = 0;
        for (char ch : d) {
            decD *= 16;
            if (ch >= '0' && ch <= '9') {
                decD += (ch - '0');
            } else if (ch >= 'A' && ch <= 'F') {
                decD += (ch - 'A' + 10);
            } else if (ch >= 'a' && ch <= 'f') {
                decD += (ch - 'a' + 10);
            }
        }
        res.push_back(to_string(decD));

        return res;
    }
};

// 🧪 Driver Code
int main() {
    int a, b, c;
    string d;
    cin >> a >> b >> c >> d;

    Solution sol;
    vector<string> result = sol.convert(a, b, c, d);

    for (const string &s : result) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
