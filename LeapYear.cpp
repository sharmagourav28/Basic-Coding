#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter year :" << endl;
    cin >> n;
    if ((n % 4 == 0 and n % 100 != 0) || n % 400 == 0)
    {
        cout << "year will be leap year" << endl;
    }
    else
    {
        cout << "Year is not leap year" << endl;
    }
}