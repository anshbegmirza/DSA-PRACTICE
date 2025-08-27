#include <bits/stdc++.h>
using namespace std;

/*
1st solution: Brute Force


*/

class Solution {
public:
    bool containsDuplicate(vector<int>numsArray) {
        /* TIME LIMIT EXTENDED (BAD TIME COMPLEXITY)
        for(int x =0; x < numsArray.size() ; x++ ){
        for(int y=0; y < x; y ++) {
          if(numsArray[x]== numsArray[y]){
            return true;
          }
        }
        }
        return false;
        */

        set<int> s;
        int n =  numsArray.size();
        for ( int i = 0 ; i < n ; i++){
            if(s.find(numsArray[i]) != s.end() ){
                return true;
            }
            s.insert(numsArray[i]);
            
        }
        return false;        
    }
};

int main() {

    return 0;
}