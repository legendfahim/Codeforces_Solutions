// A. We Got Everything Covered!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        while (n--)
        {
            int c = 97;

            for (int i = 0; i < k; i++)
            {
                cout << (char)c;
                c++;
            }
        }
        cout << endl;
    }
}