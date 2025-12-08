// 448. Find All Numbers Disappeared in an Array.cpp

#include <bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    int n = nums.size();
    vector<int> res;

    // mark the numbers first
    for (int i = 0; i < n; i++)
    {
        int num = abs(nums[i]);
        if (nums[num - 1] > 0)
        {
            nums[num - 1] = -nums[num - 1]; // marked as found
        }
    }

    // find indice which are still positive
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            res.push_back(i + 1); // push that in result
        }
    }
    return res;
}

int main()
{

    return 0;
}