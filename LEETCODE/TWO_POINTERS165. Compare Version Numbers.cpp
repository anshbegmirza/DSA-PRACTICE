// 165. Compare Version Numbers
// two pointers.

#include <bits/stdc++.h>
using namespace std;

int compareVersion(string v1, string v2) {
    int m = v1.size(); // length of v1
    int n = v2.size(); // length of v2
    
    int p1 = 0;
    int p2 = 0;
    
    while (p1 < m || p2 < n) {
        int revN1 = 0;
        int revN2 = 0;
        
        while (p1 < m && v1[p1] != '.') {
            revN1 = revN1 * 10 + (v1[p1] - '0');
            p1++;
        }
        
        while (p2 < n && v2[p2] != '.') {
            revN2 = revN2 * 10 + (v2[p2] - '0');
            p2++;
        }
        
        if (revN1 > revN2) return 1;
        if (revN1 < revN2) return -1;
        
        if (p1 < m) p1++;
        if (p2 < n) p2++;
    }
    
    return 0;
}

int main() {
    string s1 = "1.2";
    string s2 = "1.10";
    int output = compareVersion(s1, s2);
    cout << output << endl;  // Expected output: -1
    return 0;
}
