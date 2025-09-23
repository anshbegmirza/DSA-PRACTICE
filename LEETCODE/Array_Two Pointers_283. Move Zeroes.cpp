// 283. Move Zeroes
//  Array Two pointers.

#include <bits/stdc++.h>
using namespace std;


void moveZeroes(vector<int>& nums) {
    int left = 0;
    for(int right=0; right<nums.size(); right++){
      if(nums[right] != 0){
        
        // swap with left number
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        
        // increase left pointer
        left ++;
      }
    }
    
    for(int num:nums){
      cout << num;
    }
    
    
    // return nums;
}

int main() 
{
  vector<int> input = {0,1,0,3,12};
  moveZeroes(input);
// Output: [1,3,12,0,0]
}

/* 
Intuition and approach:
the brute force approach is to start with a array equal to the size of the given array, having all elements equal to zero.
then replace all the non zero elements of the initial array with new array.

this will violate the space complexity of O(n)

for my approach we use two pointer technique.
with left pointer to track the position of element and right pointer to check for zero
for all nums[right] != 0, we do the swap and icrement the left pointer,


this way all the non-zero elements will be in the beginning, and the zeroes at end
  */