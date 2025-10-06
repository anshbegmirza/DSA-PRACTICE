#include <bits/stdc++.h>
using namespace std;

vector<int> frequencySort(vector<int>& nums) {
        unordered_map <int, int> freqCount;
        
        // created a frequency map to store the frequency of each number.
        for(int num: nums){
            freqCount[num]++;
        }
        
        sort(nums.begin(), nums.end(), [&](int a, int b){
          // if both has same frequency, we will compare their value
          if(freqCount[a]==freqCount[b]){ 
            return a>b;
          }
          // else we will return as per the ascending frequency of number.
          else return freqCount[a]<freqCount[b];
        });
        
        return nums;
    }


int main() 
{
    vector<int> nums = {1,1,2,2,2,3};
    // output should be this 3,1,1,2,2,2
    vector<int> result = frequencySort(nums);
    
    for(int num:result){
      cout << num << endl;
    }
    
    return 0;
}