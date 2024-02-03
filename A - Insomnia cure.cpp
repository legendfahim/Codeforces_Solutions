// A - Insomnia cure
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    set<int> data;

    for (int i = 1; i <= d; i++)
    {
        // for k
        if ((k * i) <= d)
        {
            data.insert(k * i);
        }

        // for l
        if ((l * i) <= d)
        {
            data.insert(l * i);
        }

        // for m

        if ((m * i) <= d)
        {
            data.insert(m * i);
        }

        // for n

        if ((n * i) <= d)
        {
            data.insert(n * i);
        }
        // Break condition
        if (((k * i) > d) && ((l * i) > d) && ((m * i) > d) && ((n * i) > d))
        {
            break;
        }
    }
    cout << data.size();
}