// Array_Hash_table_sorting_229. Majority Element II.cpp

#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    // map to store frequency + count
    unordered_map <int, int> freqCount = {};
    vector<int> res = {};
    int condition = n/3;
    
    //iterate to store frequency + count
    for(int i:nums){
        freqCount[i]++;
    }
    
    for(const auto& [el,count]:freqCount){
      
      // cout << el << endl;
      // cout << count << endl;
      if(count > condition){
        res.push_back(el);
      }
      
    }
    
    
    return res;
}



int main() 
{
    vector<int> nums = {1,2};
    vector<int> res = majorityElement(nums);
    
    for(int i:res){
      cout << i << endl;
    }
    return 0;
}