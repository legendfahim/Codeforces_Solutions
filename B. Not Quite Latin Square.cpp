// B. Not Quite Latin Square
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A = 0, B = 0, C = 0;
        for (int i = 0; i < 9; i++)
        {
            char c;
            cin >> c;
            if (c == 'A')
            {
                A++;
            }
            else if (c == 'B')
            {
                B++;
            }
            else if (c == 'C')
            {
                C++;
            }
        }
        if (A < 3)
        {
            cout << 'A' << endl;
        }
        else if (B < 3)
        {
            cout << 'B' << endl;
        }
        else if (C < 3)
        {
            cout << 'C' << endl;
        }
    }
}