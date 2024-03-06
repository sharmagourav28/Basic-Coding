#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Gourhuav";
    string s2 = "varuoG";
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    int n = s1.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == s2[i])
        {
            cnt++;
        }
    }

    if (cnt == s1.size() and cnt == s2.size())
    {
        cout << "string is anagram" << endl;
    }
    else
    {
        cout << "Not anagram" << endl;
    }
}