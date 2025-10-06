// Array_String_Counting_2586. Count the Number of Vowel Strings in Range.cpp



#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
  c = tolower(c);
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        int n= words.size();
        for(int i=left; i<=right; i++){
          string& word = words[i];
          if(isVowel(word.front()) && isVowel(word.back())){
            count++;
          }
        }
        return count;
    }

int main() 
{
    vector<string> words = {"are","amy","u"};
    int left = 0;
    int right = 2;
    int result = vowelStrings(words, left, right);
    cout << result << endl;
}

// intuition:
/* 
-- So, the thought process was to start the loop from left, till right.
 loop through each word in the string, and if the first && last char are vowels, increment the count
 at the end return the count.


*/