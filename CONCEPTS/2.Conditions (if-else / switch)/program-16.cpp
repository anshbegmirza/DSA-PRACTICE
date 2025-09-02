// 16. Check if a character is a vowel or consonant.
#include <bits/stdc++.h>
using namespace std;

void checkIsCharVowel(char c) {
    switch (tolower(c)) {   // convert to lowercase to handle uppercase too
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "It is a vowel" << endl;
            break;
        default:
            cout << "It is not a vowel, but a consonant." << endl;
            break;
    }
}

int main() {
    char c;
    cout << "Enter char you want to check, is it vowel or consonant ?" << endl;
    cin >> c;
    checkIsCharVowel(c);
    return 0;
}
