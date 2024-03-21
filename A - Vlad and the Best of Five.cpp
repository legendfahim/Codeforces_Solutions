
// A - Vlad and the Best of Five
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A = 0;
        int B = 0;
        for (int i = 0; i < 5; i++)
        {
            char c;
            cin >> c;
            if (c == 'A')
            {
                A++;
            }
            else
            {
                B++;
            }
        }
        if (A > B)
        {
            cout << 'A' << endl;
        }
        else
        {
            cout << 'B' << endl;
        }
    }
}