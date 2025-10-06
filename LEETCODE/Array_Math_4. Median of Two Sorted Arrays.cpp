#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedArray = {};
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        double ans = 0.0;
        
        for(int i=0; i<n1; i++){
            mergedArray.push_back(nums1[i]);
        }

        for(int i=0; i<n2; i++){
            mergedArray.push_back(nums2[i]);
        }
        
        sort(mergedArray.begin(), mergedArray.end());
        
        int n3 = mergedArray.size();
        
        if(n3 %2 == 1){
          int m = n3 / 2;
          ans = mergedArray[m];
        }else{
          int m1 = n3 / 2-1;
          int m2 = n3/2;
          double avg = (mergedArray[m1]+mergedArray[m2])/2.0;
          ans = avg;
        }
        
        return ans;
    }

int main() 
{
    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2};
    double res = findMedianSortedArrays(nums1, nums2);
    cout << res << endl;
    return 0;
}