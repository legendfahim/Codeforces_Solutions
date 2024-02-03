// A. Spell Check
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int T = 0, i = 0, m = 0, u = 0, r = 0, other = 0;
        while (n--)
        {
            char c;
            cin >> c;
            if (c == 'T')
            {
                T++;
            }
            else if (c == 'i')
            {
                i++;
            }
            else if (c == 'm')
            {
                m++;
            }
            else if (c == 'u')
            {
                u++;
            }
            else if (c == 'r')
            {
                r++;
            }
            else
            {
                other++;
            }
        }
        if (T == 1 && i == 1 && m == 1 && u == 1 && r == 1 && other == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}