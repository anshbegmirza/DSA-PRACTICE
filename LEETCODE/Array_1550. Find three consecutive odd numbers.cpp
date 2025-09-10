#include <bits/stdc++.h>
using namespace std;

bool threeConsecutiveOdds(vector<int>& arr) {
        int counter;
        int n = arr.size();
        
        for(int i=0; i<n; i++){
          if(arr[i] % 2 != 0){
            counter++;
            if(counter == 3 || counter > 3){
              return true;
            }
          }
          else 
          counter=0;
        }
        return false;
}

int main() {
  
  // vector<int> array = {1,2,34,3,4,5,7,23,12};
  vector<int> array = {2,6,4,1};
  bool res =  threeConsecutiveOdds(array);
  cout << res << endl;
}

https://leetcode.com/submissions/detail/1766119466/