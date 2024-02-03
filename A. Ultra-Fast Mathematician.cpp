// A. Ultra-Fast Mathematician
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string f, s;
    cin >> f >> s;
    for (int i = 0; i < f.length(); i++)
    {
        if (f[i] != s[i])
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
}