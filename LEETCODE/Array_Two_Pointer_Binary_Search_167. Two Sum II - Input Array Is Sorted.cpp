// Array_Two_Pointer_Binary_Search_167. Two Sum II - Input Array Is Sorted.cpp

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0; // left ptr 
        int j = nums.size()-1; // right ptr

        while(i<j){
            int sum = nums[i] + nums[j];
            if(sum == target){
                return {i+1, j+1}; // 1 based index array as mentioned.
            }else if(sum<target){
                i++;
            }else j--;
        }
        return {};
    }

int main(){
    vector<int> nums {2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    return 0;
}