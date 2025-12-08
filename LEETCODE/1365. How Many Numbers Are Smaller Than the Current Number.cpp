// 1365. How Many Numbers Are Smaller Than the Current Number.cpp

#include <bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    int n = nums.size();
    vector<int> res(n, 0);

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (nums[j] < nums[i])
            {
                count++;
            }
        }
        res[i] = count;
    }
    return res;
}

int main()
{

    return 0;
}