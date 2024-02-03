// C. Can I Square?
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int sum = 0;
        while (n--)
        {
            int c;
            cin >> c;
            sum += c;
        }
        long long int sqt = sqrt(sum);
        if (sqt * sqt == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}