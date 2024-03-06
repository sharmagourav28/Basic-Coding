#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<char, int> freq;
    string s = "kanaksharmagouravsharma";
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i]]++;
    }
    for (auto i : freq)
    {
        cout << i.first << " " << i.second << endl;
    }
}