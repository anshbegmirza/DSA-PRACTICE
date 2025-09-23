// 2810. Faulty Keyboard
// https://leetcode.com/submissions/detail/1779861641/

#include <bits/stdc++.h>
using namespace std;

string finalString(string s) {
        string newString ;
              
        for(int i = 0; i<s.size(); i++){
          // if(s[i]=='i'){
          //   // newString.push_back(s[i]);
          //   reverse(newString.begin(), newString.end());
          // }
          // else{
          //   newString.push_back(s[i]);
          // }
          s[i]=='i' ? reverse(newString.begin(), newString.end()) : newString.push_back(s[i]);
        }  
        
        
        return newString;
}


int main() 
{
    string s = "string";
    string result = finalString(s);
    cout << result;
    
    return 0;
}

/*
Intuition or Approach :
start by traversing the string using a simple for loop.
then if we encounter the faulty character i, then we have to reverse the string,

if not push the string to newString, 
return the final string.
*/

/*
first always come up with a brute force solution.
then optimize it as much as you can.


*/