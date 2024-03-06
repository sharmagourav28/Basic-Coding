#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    int a = 0, b = 1;
    int nxtterm;
    for (int i = 2; i < n; i++)
    {
        nxtterm = a + b;
        a = b;
        b = nxtterm;
    }
    cout << "Number occur at " << n << " th place is " << nxtterm << endl;
    return 0;
}