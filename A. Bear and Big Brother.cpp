// A. Bear and Big Brother
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = 1; i > 0; i++)
    {
        a *= 3;
        b *= 2;
        if (a > b)
        {
            cout << i << endl;
            break;
        }
    }
}