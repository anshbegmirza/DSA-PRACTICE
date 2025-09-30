// Array_Math_2221. Find Triangular Sum of an Array.cpp


#include <bits/stdc++.h>
using namespace std;

int triangularSum(vector<int>& nums) {
      int n = nums.size();
      // for(int i=0; i<n-1; i++){
      //     if(n==1){
      //         ans = nums[i];
      //         return ans;
      //     }
      //     vector<int> newNums = {};
      //     int val = (nums[i] + nums[i+1]) % 10;
      //     cout << val << endl;
      //     newNums.push_back(val);
          
      //     int n2 = newNums.size();
      //       while(n2!=1){
      //         for(int i=0; i<n2-1; i++){
      //           vector<int> newNums = {};
      //           int val = (nums[i] + nums[i+1]) % 10;
      //           cout << val << endl;
      //           newNums.push_back(val);
      //           if(newNums.size()>1){
      //             // call recursive functionagain.
      //           }
      //         }
      //       }
          
      //     ans = val;
      // }
      // return ans;
      
      
      // here we are creating multiple arrays in each step.
      // instead we will work on the given array and return the result.
      
      
      while(n>1){
        for(int i=0; i<n-1; i++){
          nums[i] = (nums[i] + nums[i+1]) % 10;
        }
          n--;
      }
      return nums[0];
  } 

int main() 
{
  vector<int> nums = {1,2,3,4,5};
  int res = triangularSum(nums);
  cout << res << endl;
  return 0;
}