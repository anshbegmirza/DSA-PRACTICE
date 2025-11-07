// GREEDY_HASHTABLE_ARRAY_MED_1282. Group the People Given the Group Size They Belong To.cpp
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> groupThePeople(vector<int> &groupSizes)
{
    int n = groupSizes.size();

    vector<vector<int>> result;

    vector<vector<int>> mp(n + 1);

    for (int i = 0; i < n; i++)
    {

        int L = groupSizes[i];
        mp[L].push_back(i);

        if (mp[L].size() == L)
        {
            result.push_back(mp[L]);
            // empty it for future use
            mp[L] = {};
        }
    }

    return result;
}

int main()
{
    vector<int> input = {3,3,3,3,3,1,3};
    vector<vector<int>> res = groupThePeople(input);
    return 0;
}
