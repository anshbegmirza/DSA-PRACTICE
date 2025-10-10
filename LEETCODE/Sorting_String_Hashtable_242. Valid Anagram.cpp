// Sorting_String_Hashtable_242. Valid Anagram.cpp
#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s==t;
    }


void main(){

    bool res = isAnagram("anagram", "nagram");
    cout << res << endl;
}