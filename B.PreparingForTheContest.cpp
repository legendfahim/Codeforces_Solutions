
// B. Preparing for the Contest
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 0)
        {
            while (n)
            {
                cout << n << " ";
                n--;
            }
        }
        else
        {
            int cal = n - k;
            while (cal <= n)
            {
                cout << cal << " ";
                cal++;
            }
            cal = (n - k) - 1;
            while (cal != 0)
            {
                cout << cal << " ";
                cal--;
            }
        }

        cout << endl;
    }
}