// A. Stones on the Table
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    char c = 'A';

    while (n--)
    {
        char a;
        cin >> a;
        if (a == c)
        {
            count++;
        }
        c = a;
    }
    cout << count;
}