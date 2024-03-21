// A. Sasha and the Beautiful Array
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
        multiset<int> s;
        while (n--)
        {
            int c;
            cin >> c;
            s.insert(c);
        }
        auto mini = s.begin();
        auto max = s.end();
        max--;

        cout << *max - *mini << endl;
    }
}