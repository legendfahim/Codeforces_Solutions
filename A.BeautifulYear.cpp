// A. Beautiful Year
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    y++;
    while (1)
    {
        int a, b, c, d;
        // for a
        a = y % 10;

        // for b
        b = (y / 10) % 10;

        // for c
        c = (y / 100) % 10;

        // for d
        d = (y / 1000) % 10;
        if (a == b || b == c || c == d || a == c || a == d || c == d || b == d)
        {
            y++;
        }
        else
        {
            cout << y << endl;
            break;
        }
    }
}