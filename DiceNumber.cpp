// Dice Number

#include <bits/stdc++.h>
using namespace std;
long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        multiset<long long int> alice;
        multiset<long long int> bob;
        for (long long int A = 0; A < 3; A++)
        {
            long long int n;
            cin >> n;
            alice.insert(n);
        }

        for (long long int B = 0; B < 3; B++)
        {
            long long int n;
            cin >> n;
            bob.insert(n);
        }

        long long int a = 0;
        for (auto it = alice.rbegin(); it != alice.rend(); ++it)
        {
            a *= 10;
            a += *it;
        }

        long long int b = 0;
        for (auto it = bob.rbegin(); it != bob.rend(); ++it)
        {
            b *= 10;
            b += *it;
        }

        if (a > b)
        {
            cout << "Alice" << endl;
        }
        else if (b > a)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
}