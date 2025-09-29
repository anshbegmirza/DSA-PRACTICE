// string practice question
#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string num) {
    int e = 0;
    int o = 0;
    int n = num.size();
    for(int i = 0; i<n; i++){
        // character to integer conversion
        int digit = num[i] - '0'; 
        i%2 == 0 ? e +=digit : o+= digit;
    }
    return e == o;
}

int main(){
    // call here

    return 0;
}