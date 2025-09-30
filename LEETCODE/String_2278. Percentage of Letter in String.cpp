// String_2278. Percentage of Letter in String.cpp
// https://leetcode.com/submissions/detail/1786924421/

#include <bits/stdc++.h>
using namespace std;


 int percentageLetter(string s, char letter) {
        // foobar
        // letter = o
        double p = 0;
        int count = 0;
        double n = s.size();
        for(char c:s){
          if(c == letter){
            count++;
          }
        }
        cout << count << endl;
        p = (count/n) * 100; 
        
        return p;


    // intuition
    /*
    run a for loop, count the occurence, store it.
    then find percentage and return it
    
    
    */
    }


int main() 
{
    string s = "foobar";
    char c = 'o';
    int res = percentageLetter(s,c);
    cout << res << endl;
}

// ok so when we do a int/int division and it returns us a int, not the rounded up one.
// so we have to round that thing up and return it
// that's y we use a double or float for that to ease things up.