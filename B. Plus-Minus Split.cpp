// B. Plus-Minus Split
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
        long sum = 0;
        while (n--)
        {
            char c;
            cin >> c;
            if (c == '+')
            {
                sum += 1;
            }
            else
            {
                sum -= 1;
            }
        }
        cout << abs(sum) << endl;
    }
}
