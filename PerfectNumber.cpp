#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;

    int num = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            num = num + i;
        }
    }
    if (num == n)
    {
        cout << n << " is a perfect number" << endl;
    }
}