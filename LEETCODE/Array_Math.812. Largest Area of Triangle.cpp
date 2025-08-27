
// #include <bits/stdc++.h>
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int main(){
  
  // int area = 0.5 * [x1(y2-y3) + x2(y3-y1) +x3(y1-y2)];
  
  // Input: points = [[0,0],[0,1],[1,0],[0,2],[2,0]]
  // output = 2
  
  vector<vector<int>>points= {{0,0}, {0,1}, {1,0}, {0,2}, {2,0}};
  double maxArea = 0;
  int n = points.size();
  
  for(int i = 0; i<n; i++ ){
    
    for(int j = i+1; j<n; j++){
      
      for(int k=j+1; k<n; k++){
        
        int x1 = points[i][0];
        int y1 = points[i][1];
        
        
        int x2 = points[j][0];
        int y2 = points[j][1];
        
        
        int x3 = points[k][0];
        int y3 = points[k][1];
      
      cout<< x1 << y1 << endl;
  
      double area = 0.5 * fabs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
      
      maxArea = max(maxArea, area);
        
      }
    }
    
  }
  cout << "Max area = " << maxArea << endl;
  return 0;

}

