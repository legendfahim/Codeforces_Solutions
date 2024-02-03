// A. Anton and Danik
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, A = 0, D = 0;
    cin >> n;
    while (n--)
    {
        char c;
        cin >> c;
        if (c == 'A')
        {
            A++;
        }
        else
        {
            D++;
        }
    }
    if (A > D)
    {
        cout << "Anton";
    }
    else if (A < D)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}