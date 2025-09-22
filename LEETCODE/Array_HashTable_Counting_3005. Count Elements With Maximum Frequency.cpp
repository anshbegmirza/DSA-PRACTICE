// 3005. Count Elements With Maximum Frequency
// https://leetcode.com/submissions/detail/1778759513/

#include<bits/stdc++.h>
using namespace std;

 int maxFrequencyElements(vector<int>& nums) {
  unordered_map <int,int> freqCount = {};
  int total = 0;
  for(int num:nums){
    freqCount[num]++;
  }
  
  int maxF = 0;        
  for(const auto& [key,value]:freqCount){
    cout << "Key: "<<key << "Value: " << value << endl ;
    maxF = max(maxF,value);
  }        
  // cout << maxF;
  for(const auto& [key,value]:freqCount){
    if(maxF==value){
      total = total + value;
    }
  }
  
  return total;          
}

int main () {
 
vector<int> testCase = {1,2,3,4,5};
// vector<int> testCase = {1,2,2,3,1,4};
 int result = maxFrequencyElements(testCase);
 
 cout << result;
 return result;
}

/*
Intuition: So I thought of using a hash map to store the frequency of each element in the array.
Then I used a loop to find the max frequency
then another loop to find the total, if the maxF == value then we add the value to total, if not 
then we skip that.

at the end I returned the int total.

# Brute Force and naive approach but still learning how to solve questions.
*/
