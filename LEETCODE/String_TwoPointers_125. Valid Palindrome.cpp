// String_TwoPointers_125. Valid Palindrome.cpp

class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = "";
        for (char a : s) {
        if (isalnum(a)) {
            newStr += tolower(a);
        }}

        int i = 0; 
        int j = newStr.size()-1; 
        while(i<j){
            if(newStr[i] != newStr[j]){
                return false;
            }
                j--;
                i++;
        }
        return true;
    }
};


#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(string s) {
        string schars = "";
        for (char a : s) {
          a = tolower(a);
        if (a != ' ' && a != '.' && a != '"' && a != ',' && a!=':' && a!=' ') {
            schars += a;
          }
        }
        
        int i = 0; // left ptr
        int n = schars.size();
        int j = n-1; // right ptr
        cout << schars << endl;
        while(i<j){
          cout << schars[i] << schars[j] << endl;
            if(schars[i] != schars[j]){
                // cout <<  false << endl;
                return false;
            }
                j--;
                i++;
        }
        // cout << true << endl;
        return true;
    }
int main() 
{
    string s = "A man, a plan, a canal: Panama";
    bool res = isPalindrome(s);
    cout << res << endl;
    return 0;
}