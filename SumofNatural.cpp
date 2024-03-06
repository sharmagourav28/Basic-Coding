#include <bits/stdc++.h>
using namespace std;

int sumof(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum = sum + n;
        n--;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter your number" << endl;
    cin >> n;
    int ans = sumof(n);
    cout << "sum = " << ans << endl;
}