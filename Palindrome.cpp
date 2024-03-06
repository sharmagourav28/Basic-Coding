#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "kankdrkak";
    int n = s.size();
    int i, flag = 0;
    for (i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
        {
            flag++;
        }
    }
    if (flag == i)
    {
        cout << "String is palindrome" << endl;
    }
    else
    {
        cout << "String is not palindrome" << endl;
    }
}