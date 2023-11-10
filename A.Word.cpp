// A. Word
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int lo = 0;
    int up = 0;
    string result;
    string newStr = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            lo++;
        }
        else
        {
            up++;
        }
    }
    if (lo > up)
    {
        result = "low";
    }
    else if (lo < up)
    {
        result = "up";
    }
    else if (lo = up)
    {
        result = "low";
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (result == "low")
        {
            newStr += tolower(s[i]);
        }
        else if (result == "up")
        {
            newStr += toupper(s[i]);
        }
    }
    cout << newStr << endl;
}