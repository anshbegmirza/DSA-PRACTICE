// Array_DP_1039. Minimum Score Triangulation of Polygon.cpp

#include <bits/stdc++.h>
using namespace std;

int t[51][51]; // memo
int solve(vector<int> &values, int i, int j)
{

    // a,b,c,d,e,f,g
    if (j - i + 1 < 3)
    {
        return 0;
    }

    if (t[i][j] != -1)
    {
        return t[i][j];
    }

    int res = INT_MAX;
    for (int k = i + 1; k < j; k++)
    {
        int wt = values[i] * values[k] * values[j] + solve(values, i, k) + solve(values, k, j);
        res = min(res, wt);
    }
    return t[i][j] = res;
}

int minScoreTriangulation(vector<int> &values)
{
    int n = values.size();
    memset(t, -1, sizeof(t));
    return solve(values, 0, n - 1);
}

int main()
{
    vector<int> input = {1, 23, 4, 5, 1, 2};
    int op = minScoreTriangulation(input);

    cout << op << endl; // 118
    return 0;
}