// Math_String_Greedy_3014. Minimum Number of Pushes to Type Word I.cpp

#include<bits/stdc++.h>
using namespace std;

int minimumPushes(string word) {
        int ans = 0;
        int n = word.size();
        int row = 1;

        // we can map upto 8 keys
        int quotient = n / 8;
        int remainder = n % 8;

        while(quotient--){
            ans += 8 * row;
            cout << ans << endl;
            row++;
        }
        ans += remainder * row;
        cout << ans << endl;
        return ans;

    }

int main(){

    string word = "xycdefghij";
    int r = minimumPushes(word);
    cout << r << endl;
    return 0;
}