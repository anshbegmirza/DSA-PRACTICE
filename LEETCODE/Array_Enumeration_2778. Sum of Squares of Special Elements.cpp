  #include<bits/stdc++.h>
  using namespace std;
  int sumOfSquares(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(n % (i+1) == 0){
                ans += nums[i] * nums[i];
            }
        }
        return ans;
    }

    int main(){
        vector<int> input = {1,2,3,4};
        int res = sumOfSquares(input);
        cout << res << endl;
        return 0;
    }