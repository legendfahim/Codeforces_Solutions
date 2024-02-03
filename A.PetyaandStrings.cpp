// A. Petya and Strings
#include <bits/stdc++.h>
using namespace std;
long long int main()
{
    string f, s;
    cin >> f >> s;
    bool result = true;
    for (long long int i = 0; i < f.length(); i++)
    {

        char lower_first = tolower(f[i]);
        char lower_second = tolower(s[i]);
        if ((long long int)lower_first < (long long int)lower_second)
        {
            cout << -1 << endl;
            result = false;
            break;
        }
        else if ((long long int)lower_first > (long long int)lower_second)
        {
            cout << 1 << endl;
            result = false;
            break;
        }
        else if ((long long int)lower_first == (long long int)lower_second)
        {
            result = true;
        }
    }
    if (result)
    {
        cout << 0 << endl;
    }
}