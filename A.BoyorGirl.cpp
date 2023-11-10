
// A. Boy or Girl
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin >> name;
    set<char> names;
    for (char c : name)
    {
        names.insert(c);
    }
    if (names.size() % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
}