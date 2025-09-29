// Greedy_Array_Math.976. Largest Perimeter Triangle.cpp

#include<bits/stdc++.h>
using namespace std;

int largestPerimeter(vector<int>& nums) {
    int n  = nums.size();
    int maxP = 0;
    sort(nums.begin(), nums.end(), greater<int>());
    if(n<0){
        return maxP;
    }

    for(int i  = 0; i<n-2; i++){
        int a = nums[i];
        int b = nums[i+1];
        int c = nums[i+2];
        if(b+c>a){
        int p = a+b+c;
        maxP = max(maxP, p);
        }
    }
    return maxP;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6};
    int output = largestPerimeter(nums);
    return 0;
}