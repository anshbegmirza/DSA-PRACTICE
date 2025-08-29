/*
the logic b/h this was :


https://leetcode.com/problems/missing-number/description
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        /*
        // using bit manipulation XOR operator
        int n = nums.size();
        int missing=n;

        for (int i =0; i < n; i++){
            missing ^= (i ^ nums[i]);
        }
        return missing;
        */

        sort (nums.begin(), nums.end());
        int n = nums.size();
        int totalSum = (n * (n+1))/2;
        
        int arraySum = 0;
        
        for (int x: nums) arraySum = arraySum + x;
        
        return totalSum-arraySum;
    }
};