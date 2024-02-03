// B. Two Divisors--->TLE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x;
        bool flag = false;
        for (int i = 2; i > 0; i++)
        {
            x = b * i;

            if (x % a == 0)
            {
                flag = true;
                for (int j = a + 1; j < b; j++)
                {
                    if (x % j == 0)
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if (flag)
            {
                cout << x << endl;
                break;
            }
        }
    }
}
