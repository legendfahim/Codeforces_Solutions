// B. Drinks
#include <bits/stdc++.h>
using namespace std;
long long int main()
{
    long long int n;
    cin >> n;
    double sum = 0;
    for (long long int i = 0; i < n; i++)
    {
        long long int c;
        cin >> c;
        sum += c;
    }
    sum /= n;
    cout << fixed << setprecision(12) << sum;
}