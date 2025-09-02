#include <bits/stdc++.h>
using namespace std;

  int majorityElement(vector<int>& nums) {
    int n = nums.size()
    ;
  
    sort(nums.begin(), nums.end());
    int count = 0;
    int el = nums[0];
    
     if(n==1){
      el = nums[0];
    }
    
    for(int i=0; i < n-1; i++){
      if(el==nums[i]){
          count++;
          el = nums[i];
          
          cout << "num :" << el << "Count :" << count << endl;
          if(count > (n/2)){
             return nums[i];
          }
      }
      else{
        el = nums[i];
        count = 1;
        cout << "Count for value: "<< nums[i] << count << endl;
      }
    }
    return el;
  }
int main() 
{ 
  vector<int> nums = {6,6,6,7,7};
  // vector<int> nums = {3,2,3};
   int res;
   res = majorityElement(nums);
   cout << res << endl;
   return 0;
}