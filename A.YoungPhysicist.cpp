// A. Young Physicist
#include <bits/stdc++.h>
using namespace std;
long long int main()
{
    long long int n;
    cin >> n;

    long long int sum1 = 0;
    long long int sum2 = 0;
    long long int sum3 = 0;
    while (n--)
    {
        long long int x, y, z;
        cin >> x >> y >> z;
        sum1 += x;
        sum2 += y;
        sum3 += z;
    }
    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}