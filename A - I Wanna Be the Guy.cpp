// A - I Wanna Be the Guy
#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int> nums;
    int n;
    cin >> n;
    int p;
    cin >> p;
    while (p--)
    {
        int c;
        cin >> c;
        nums.insert(c);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        nums.insert(c);
    }

    auto it = nums.rbegin();

    if (nums.size() == n && *it == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}
