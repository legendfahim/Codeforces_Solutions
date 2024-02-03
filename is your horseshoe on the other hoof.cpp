// is your horseshoe on the other hoof
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> A;
    for (int i = 0; i < 4; i++)
    {
        int a;
        cin >> a;
        A.insert(a);
    }
    cout << 4 - A.size();
}