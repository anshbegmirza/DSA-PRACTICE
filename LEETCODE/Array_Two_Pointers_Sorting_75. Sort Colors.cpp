// Array_Two_Pointers_Sorting_75. Sort Colors.cpp

#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
        // 0 = red
        // 1 = white
        // 2 = blue

        int left = 0; // left ptr
        int right = nums.size()-1; //right ptr
        int idx = 0;

        while(idx <= right){
            if(nums[idx]==0){
             swap(nums[idx], nums[left]);
             left++;
             idx++;   
            }else if (nums[idx]==2){
                swap(nums[idx], nums[right]);
                right--;
            } else {
                idx++;
            }
        }
    }

int main(){
    vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);
    for(int num:nums){
        cout << num << endl;
    }
    return 0;
}    
/*
Intuition
so I used two pointer approach for this
1 left ptr and 1 right ptr
and 1 iterator idx
run a for loop till idx <= right
if(num at idx == 0)
we swap the numbers, increment the left ptr and idx
else if (num at idx == 2)

*/