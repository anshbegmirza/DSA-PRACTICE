#include <bits/stdc++.h>
using namespace std;

// 3467. Transform Array by Parity
// https://leetcode.com/submissions/detail/1766843512/ 

vector<int> transformArray(vector<int>& nums) {
        vector<int> result = {};
        int n = nums.size();
        
        for(int i=0; i<n; i++){
          if(nums[i] % 2 == 0){
            nums[i] = 0;
            result.push_back(nums[i]);
          }else {
            nums[i]=1;
            result.push_back(nums[i]);
          }
        }
        sort(result.begin(), result.end());
        return result;
}

int main() 
{
  vector<int> testCase = {4,3,2,1};
  // 0,0,1,1
  vector<int> res = transformArray(testCase);
  
  cout << "Result is" << endl;
  
  for(int i=0; i<res.size(); i++){
    cout << res[i] << endl;
  }
  
  return 0;
}