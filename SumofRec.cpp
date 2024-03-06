#include <bits/stdc++.h>
using namespace std;

int sumof(int n)
{
    if (n != 0)
    {
        return n + sumof(n - 1);
    }
    return n;
}
int main()
{
    int n;
    cout << "Enter your number" << endl;
    cin >> n;
    cout << sumof(n) << endl;
}