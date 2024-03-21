
// A.Make it White
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
        string s;
        cin >> s;
        int a, b;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                a = i + 1;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                b = i + 1;
                break;
            }
        }

        cout << (b - a) + 1 << endl;
    }
}