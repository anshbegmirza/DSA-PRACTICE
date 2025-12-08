// 485. Max Consecutive Ones.cpp

#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int maxCount = 0;
    int count = 0;

    for (int num : nums)
    {
        if (num == 1)
        {
            count++;
            maxCount = max(count, maxCount);
        }
        else
        {
            count = 0;
        }
    }
    return maxCount;
}

int main()
{

    return 0;
}