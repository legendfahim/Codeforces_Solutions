// A. Hulk
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "I";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            s += " hate ";
        }
        else
        {
            s += " love ";
        }
        if (i < n)
        {
            s += "that I";
        }
    }
    s += "it";
    cout << s;
}