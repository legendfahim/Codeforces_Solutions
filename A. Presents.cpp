// A. Presents
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> num;
    for (int i = 1; i <= n; i++)
    {
        int c;
        cin >> c;
        num.insert({c, i});
    }
    for (auto &it : num)
    {
        cout << it.second << endl;
    }
}