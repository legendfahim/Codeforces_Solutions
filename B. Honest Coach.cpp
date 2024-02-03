// B. Honest Coach
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
        multiset<int> nums;

        while (n--)
        {
            int c;
            cin >> c;
            nums.insert(c);
        }
        int minimum = 1000;
        for (auto it = nums.begin(); it != prev(nums.end()); ++it)
        {
            int diff = *next(it) - *it;
            minimum = min(minimum, diff);
        }

        cout << minimum << endl;
    }

    return 0;
}