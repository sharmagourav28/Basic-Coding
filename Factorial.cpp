#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter your number" << endl;
    int k = n;
    cin >> n;
    int fact = 1;
    while (n > 0)
    {
        fact = fact * n;
        n--;
    }
    cout << "Factorial is " << fact << endl;
}