// 215. Kth Largest Element in an Array
// Array Sorting, Heap Sort

#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    // currently can't think of a solution without sorting !
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return nums[n-k];

    // will attempt this question again once, I have a solution         without     SORTING !
    // I'll be back !
}

int main () {
  vector<int> input = {3,2,1,5,6,4};
  int output = findKthLargest(input,2);
  cout << output; // 5
  return 0;
 }
