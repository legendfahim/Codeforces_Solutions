
// C.Sasha and the Casino
#include <iostream>
using namespace std;
long long next_bet(long long cur_loss, long long k)
{
    return (cur_loss + k - 1) / (k - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long k, x, a;
        cin >> k >> x >> a;
        long long u = 0;
        bool ok = true;
        for (int i = 0; ok && i < x; i++)
        {
            long long v = next_bet(u, k);
            u += (v == 0) ? 1 : v;
            ok = u <= a;
        }
        cout << ((k * (a - u) > a) ? "YES" : "NO") << endl;
    }
    return 0;
}
