
// Turtle Math : Fast Three Task
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
        int sum = 0, ans;
        map<int, int> mp;
        int rem_1 = -1, rem_2 = -1;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
            if (a % 3 == 1)
            {
                rem_1 = a;
            }
            if (a % 3 == 2)
            {
                rem_2 = a;
            }
            sum += abs(a);
        }
        int r = sum % 3;
        if (r == 0)
        {
            ans = 0;
        }
        else if ((sum - rem_1) % 3 == 0 || (sum - rem_2) % 3 == 0)
        {
            ans = 1;
        }
        else if (r = -1)
        {
            ans = 2;
        }
        cout << ans << "\n";
    }
    return 0;
}