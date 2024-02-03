#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        unsigned long long int ans = 1, p;
        for (int i = 0; i < n; i++)
        {
            cin >> p;
            ans *= p;
        }
        if (ans != 0)
        {

            if (2023 % ans == 0)
            {
                cout << "YES\n";
                cout << 2023 / ans;
                for (int i = 1; i < k; i++)
                    cout << " " << 1;
                cout << endl;
            }
            else
                cout << "NO\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}