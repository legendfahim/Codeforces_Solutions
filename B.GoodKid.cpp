
// B. Good Kid
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
        multiset<int> arr;
        while (n--)
        {
            int num;
            cin >> num;
            arr.insert(num);
        }
        if (!arr.empty())
        {
            auto it = arr.begin();
            arr.erase(it);
            arr.insert(*it + 1);
        }

        long int product = 1;

        for (auto e : arr)
        {
            product *= e;
        }
        cout << product << endl;
    }
}