// Sorting_Array_HashTable_String_2273. Find Resultant Array After Removing Anagrams.cpp

#include <bits/stdc++.h>
using namespace std;

vector<string> removeAnagrams(vector<string> &words)
{
    int n = words.size();
    vector<string> result;
    string previous = "";
    for (int i = 0; i < n; i++)
    {
        string s = words[i];
        sort(s.begin(), s.end());
        if (s != previous)
        {
            result.push_back(words[i]);
        }
        previous = s;
    }
    return result;
}
int main()
{   
    vector<string> words = {"abba","baba","bbaa","cd","cd"};
    vector<string> res = removeAnagrams(words);

    for(string r:res){
        cout << r << endl;
    }
    return 0;
}