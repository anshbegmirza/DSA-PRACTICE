#include<bits/stdc++.h>
using namespace std;

int triangleNumber(vector<int>& nums) {
        // nums length < 3
        if(nums.size() < 3){
            return 0;
        }

        int result = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        // triangle is considered valid if (s1 + s2 > s3)
        for(int i = 0; i<n-2; i++)
         for(int j=i+1; j<n-1; j++)
           for(int k=j+1; k<n; k++)
             if(nums[i]+nums[j]>nums[k])
               result++;
             else break;
        return result;
}

// we have to optimize it to a two pointer approach.

int main () {
  vector<int> input = {2,2,3,4};
  int output = triangleNumber(input);
  cout << output;
  return 0;
 }