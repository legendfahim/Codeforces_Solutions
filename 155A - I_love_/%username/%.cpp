// 155A - I_love_\%username\%
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0, w, b, a;

    cin >> b;
    w = b;
    while (--n)
    {
        cin >> a;
        if (b < a)
        {
            count++;
            b = a;
        }
        if (w > a)
        {
            count++;
            w = a;
        }
    };
    cout << count;
}