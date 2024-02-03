// A-vanya and fence
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, h;
    cin >> t >> h;
    int sum = 0;
    while (t--)
    {
        int c;
        cin >> c;
        if (c > h)
        {
            sum += 2;
        }
        else
        {
            sum += 1;
        }
    }
    cout << sum;
}
