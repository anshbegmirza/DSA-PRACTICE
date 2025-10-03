// Array_TOWPOINTER_GREEDY_11. Container With Most Water.cpp

#include<bits/stdc++.h>
using namespace std;

 int maxArea(vector<int>& height) {
        int n = height.size();
        int j = n-1; // right ptr
        int maxArea = 0;
        int i = 0; // left ptr

        while(i<j){
            // left is smaller than right
            int w = j-i;
            int h = min(height[i], height[j]);
            int area = w*h;
            maxArea = max(area, maxArea);

            // if(height[i]<height[j]){
            //     i++;
            // }else j--;
            height[i]<height[j] ? i++ : j--;
        }
        return maxArea;
    }

int main () {
 vector<int> height = {1,8,6,2,5,4,8,3,7};
 int area = maxArea(height);
 cout << area << endl;

 return 0;
 }