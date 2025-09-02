#include <bits/stdc++.h>
using namespace std;
char findTheDifference(string s, string t) {
    int sumS = 0;
    int sumT = 0;
    int diff=0;
    for(int i =0; i<s.length(); i++){
        sumS += s[i];
    }
    for(int i = 0; i<t.length(); i++){
        sumT += t[i];
    }
    diff = sumS > sumT ? sumS - sumT : sumT - sumS;
    return char(diff);
}

int main() 
{ 
    string s = "";
    string t = "y";
    char ch = findTheDifference(s,t);
    cout << ch << endl;
    return 0;
}