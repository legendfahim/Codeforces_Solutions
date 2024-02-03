// A. Phoenix and Gold
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

long long int main()
{
    // Input Test Case
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, d;
        cin >> n >> d;
        long long int sum = 0;
        long long int x;
        vector<long long int> v;
        for (long long int i = 0; i < n; i++)
        {
            // Input weight
            cin >> x;
            v.push_back(x);
            sum += x;
        }
        if (sum == d)
            cout << "NO" << nl;
        else
        {
            cout << "YES" << nl;
            long long int cnt = 0;
            long long int sum = 0;
            while (cnt != n)
            {
                long long int ans = v[0];
                v.erase(v.begin());
                if (sum + ans == d)
                {
                    v.push_back(ans);
                }
                else
                {
                    cout << ans << " ";
                    sum += ans;
                    cnt++;
                }
            }
            cout << nl;
        }
    }
    return 0;
}
