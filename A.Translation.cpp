
// A. Translation
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t, newS = "";
    cin >> s >> t;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        newS += s[i];
    }
    if (newS == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}