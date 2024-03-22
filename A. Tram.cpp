// A.Tram
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int flag = -1;
    while (n--)
    {
        int a, b;

        cin >> a >> b;
        a = sum - a;
        sum = a + b;
        if (sum > flag)
        {
            flag = sum;
        }
    }
    cout << flag << endl;
}