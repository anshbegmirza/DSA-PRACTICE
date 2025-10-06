// String_Counting_HashMap_Array_2053. Kth Distinct String in an Array.cpp


#include <bits/stdc++.h>
using namespace std;

string kthDistinct(vector<string>& arr, int k) {
      unordered_map <string,int> freqCount;
      for(string s:arr){
          freqCount[s]++;
      }
      
      int count = 0;
      for(string s:arr){
        // string appears once
        if(freqCount[s]==1){
          count++;
          if(count==k){
            return s;
          }
        }
      }
      
      return "";
  }

int main() 
{
   vector<string> arr = {"d","b","c","b","c","a"};
   int k = 2;
   
  string res = kthDistinct(arr, k);
  for(char s:res){
    cout << s << endl;
  }
   
    return 0;
}

/*
Intuition: 
So I created a object(map) to store the frequency of each string in the array given.
run a for loop to for each string in the given array
if string occurs once, we increase count
and if that count is equal to k
we return that string.
else we return null string (empty string) ""

*/