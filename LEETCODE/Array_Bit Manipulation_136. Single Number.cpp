// https://leetcode.com/submissions/detail/1755481210/

/*

    class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique = 0;
        int n = nums.size();

        for(int x=0; x<n; x++){
            unique ^= nums[x];
        }
        return unique;
    }
};


*/