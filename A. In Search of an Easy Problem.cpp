
// A. In Search of an Easy Problem
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = false;
    while (n--)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
}