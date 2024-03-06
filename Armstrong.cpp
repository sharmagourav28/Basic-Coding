#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter your number" << endl;
    cin >> n;
    int ans = n;
    int sum = 0;
    while (ans > 0)
    {
        int rem = ans % 10;
        sum = sum + (rem * rem * rem);
        ans = ans / 10;
    }
    if (sum == n)
    {
        cout << "armstrong number" << endl;
    }
    else
    {
        cout << "not a armstrong " << endl;
    }
}