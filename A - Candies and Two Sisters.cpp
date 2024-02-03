// A - Candies and Two Sisters
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
        int cal = n / 2;
        if (n % 2 == 0)
        {
            if (cal == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << cal - 1 << endl;
            }
        }
        else
        {
            cout << cal << endl;
        }
    }
}