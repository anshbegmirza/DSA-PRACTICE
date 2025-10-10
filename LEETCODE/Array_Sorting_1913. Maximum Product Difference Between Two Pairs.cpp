// Array_Sorting_1913. Maximum Product Difference Between Two Pairs.cpp

#include <bits/stdc++.h>
using namespace std;

int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for(int n:nums){
          cout << n << endl;
        }
        
        int n = nums.size()-1;
        cout << "Size of array is" << n << endl;
        int max1 = nums[0]*nums[1];
        int max2 = nums[n] * nums[n-1];
        
        cout <<  "Max 1 is" << max1 << endl;
        cout <<  "Max 2 is" << max2 << endl;
        
        return max1 ;
    }

int main() 
{
    vector<int> nums = {5,6,2,7,4};
    int res = maxProductDifference(nums);
    cout << res << endl;
    return 0;
}