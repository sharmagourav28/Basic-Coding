#include <iostream>
using namespace std;
int gcd(int first, int second)
{
    if (first == 0)
    {
        return second;
    }
    if (second == 1)
    {
        return first;
    }
    if (first == second)
    {
        return first;
    }
    if (first > second)
    {
        return gcd(first - second, second);
    }
    if (second > first)
    {
        return gcd(first, second - first);
    }
}
int main()
{
    int first, second;
    cout << "Enter first and second number : " << endl;
    cin >> first >> second;
    int ans = gcd(first, second);
    cout << "The GCD is " << ans << endl;
}