
// A. Lucky?
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string numbers;
        cin >> numbers;
        int fs = 0, ls = 0;
        for (int i = 0; i < 3; i++)
        {
            fs += numbers[i] - '0';
        }
        for (int i = 3; i < 6; i++)
        {
            ls += numbers[i] - '0';
        }
        if (fs == ls)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}