
// A. Brick Wall
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int max_stability = (m / 2) * n;
        cout << max_stability << endl;
    }

    return 0;
}