//  A. Helpful Maths
#include <bits/stdc++.h>
using namespace std;
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(nullptr);        \
    cout.tie(nullptr);

int main()
{
    FastIO;
    string s;
    cin >> s;
    multiset<int> nums;
    int plus = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+')
        {
            plus++;
            continue;
        }

        int n = s[i] - '0';
        nums.insert(n);
    }
    for (auto e : nums)
    {
        cout << e;
        if (plus > 0)
        {
            cout << '+';
            plus--;
        }
    }
}