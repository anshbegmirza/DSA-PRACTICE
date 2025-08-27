#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int reverse(int n) {
    long reverseN = 0;
    int lastdigit =0;
        // number extraction used. 7869
       while(n != 0){
        lastdigit = n % 10;
        n = n/10;
        // rever logic
        reverseN = (reverseN * 10) + lastdigit;
        }
    cout << reverseN << endl;

    if(reverseN > INT_MAX || reverseN < INT_MIN){
        return 0;
    }
    return reverseN; 
    }
};

int main (){

    return 0;
}