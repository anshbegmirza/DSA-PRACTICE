#include <bits/stdc++.h>
using namespace std;

 vector<int> stableMountains(vector<int>& height, int threshold) {
            vector<int> result = {};    
          for(int i = 1; i< height.size(); i++){
            cout << height[i] << endl;
            if(height[i-1]>threshold){
              cout << "Height is greater" << endl;
              cout << height[i] << endl;
              result.push_back(i+1);
            }
          }
          return result;
 }  


int main() 
{
  vector<int> testCase = {1,2,3,4,5};
  int threshold = 2;
  vector<int> res = stableMountains(testCase, threshold);
    cout << "Result is" << endl;
  for(int i =0 ; i < res.size(); i ++ ){
    cout << res[i] << endl;
  }
}