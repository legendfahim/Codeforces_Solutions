
// A. YES or YES?
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string input, test = "";
        cin >> input;

        for (int i = 0; i < input.length(); i++)
        {
            test += toupper(input[i]);
        }
        if (test == "YES")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}