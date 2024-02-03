// Bit++
#include <bits/stdc++.h>
using namespace std;
long long int main()
{
    long long int n;
    cin >> n;
    long long int x = 0;
    while (n--)
    {
        string s;
        cin >> s;
        for (char c : s)
        {
            if (c == '+')
            {
                x++;
                break;
            }
            else if (c == '-')
            {
                x--;
                break;
            }
        }
    }
    cout << x;
}