// 1877. Minimize Maximum Pair Sum in Array
#include <bits/stdc++.h>
using namespace std;

int minPairSum(vector<int>& nums) {
        // sort nums first
        sort(nums.begin(), nums.end());
        // use two pointers to for left and right.
        int left = 0;
        int right = nums.size()-1;
        int ans = 0;
        // run a loop till left is smaller than right.
        while(left<right){
            ans = max(ans,nums[left]+nums[right]);
            left ++;
            right --;
        }
        return ans;
    }


int main () {
  
 return 0;
}