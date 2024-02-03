// A. Sum of 2050
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int count = 0;
        while (n >= 2050)
        {
            count++;
            long long x = 2050;
            while (x <= n)
            {
                x *= 10;
            }
            x /= 10;
            n -= x;
        }
        if (n != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
}