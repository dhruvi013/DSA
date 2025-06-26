#include <bits/stdc++.h>
using namespace std;

double percent_difference(double derived, double actual)
{
    double diff = abs(derived - actual);
    double percent_diff = diff / actual * 100;                                       

    return percent_diff;
}

void Print_Vector(vector<pair<double, pair<int, int>>> &answer)
{
    vector<pair<double, pair<int, int>>>::iterator itr;

    for (itr = answer.begin(); itr != answer.end(); itr++)
    {
        cout << "x = " << itr->second.first << "\ty = " << itr->second.second << "\tdifference = " << itr->first << endl;
    }
}

void Calculate()
{

    // map<double, pair<int, int>> answer;
    vector<pair<double, pair<int, int>>> answer;

    for (int i = 1; i <= 38; i++)
    {
        int k = log2(pow(10, i));

        double lower = percent_difference(pow(10, i), pow(2, k));
        double upper = percent_difference(pow(10, i), pow(2, k + 1));
        answer.push_back({lower, {k, i}});
        answer.push_back({upper, {k + 1, i}});
    }

    sort(answer.begin(), answer.end());
    Print_Vector(answer);
    return;
}

int main()
{
    Calculate();
    return 0;
}