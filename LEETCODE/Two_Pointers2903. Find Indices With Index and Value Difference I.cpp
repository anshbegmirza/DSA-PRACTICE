// 2903. Find Indices With Index and Value Difference I
// Array Two Pointers

#include <bits/stdc++.h>
using namespace std;


vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int left = 0;
        vector<int> answer = {};
       for(int i = 0; i < nums.size(); i++){
        for(int j = 0; j<nums.size(); j++){
            if(abs(i-j)>=indexDifference && abs(nums[i]-nums[j])>=valueDifference){
                answer.push_back(i);
                answer.push_back(j);
                return answer;
            }
        }
       }
       return answer;
    } 
int main() 
{
  // vector<int> input = {5,1,4,1};
  vector<int> input = {1,2,3};
  int idDiff = 2;
  int valDiff = 4;
  vector<int> result = findIndices(input, idDiff, valDiff);
  //  output should be [0,3]
  // for case 1,2,3 output should be -1,-1
  for(int res:result){
    cout << res << endl;
  }
  
  

}