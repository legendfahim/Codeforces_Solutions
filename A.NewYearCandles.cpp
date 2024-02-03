// A. New Year Candles
#include <bits/stdc++.h>
using namespace std;
long long int main()
{
    long long int a, b;
    cin >> a >> b;
    long long int count = a;
    while (a >= b)
    {
        count = count + (a / b);
        a = (a / b) + (a % b);
    }
    cout << count;
}