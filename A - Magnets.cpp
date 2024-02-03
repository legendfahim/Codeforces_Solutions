// A - Magnets
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 1;
    char c;
    for (int i = 0; i < n; i++)
    {
        char f, l;
        cin >> f >> l;
        if (i == 0)
        {
            c = l;
        }
        else
        {

            if (c == f)
            {
                count++;
            }
            c = l;
        }
    }
    cout << count;
}