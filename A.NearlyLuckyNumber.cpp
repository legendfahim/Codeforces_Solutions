// A. Nearly Lucky Number
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n;
    cin >> n;
    unsigned long long int result = 0;
    while (n != 0)
    {
        int a = n % 10;
        n /= 10;
        if (a == 4 || a == 7)
        {
            result++;
        }
    }
    if (result == 4 || result == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}