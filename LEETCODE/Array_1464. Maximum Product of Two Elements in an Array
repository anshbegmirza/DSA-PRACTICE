#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        int maxProduct = 0;
        int product =0;
        for(int i =0; i <n; i++){

            for(int j=i+1; j<n; j++){
                product = (nums[i]-1)* (nums[j]-1);
                cout << product << endl;
                if(product > maxProduct){
                    maxProduct = product;
                    cout << maxProduct << endl;
                }
                
            }

        }
        return maxProduct;
    }

int main() 
{
   vector<int> nums = {3,4,5,2};
   
   int res;
   res = maxProduct(nums);
   cout << res << endl;
   return 0;
}