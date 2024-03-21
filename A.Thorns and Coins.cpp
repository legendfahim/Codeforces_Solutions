
// A.Thorns and Coins
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int test_case = 0; test_case < t; test_case++)
    {
        int n;
        cin >> n;

        string path;
        cin.ignore();       // Ignore newline character
        getline(cin, path); // Read the entire line

        int coins_collected = 0;
        int t = n;

        int i = 0;
        while (i < n - 1)
        {
            if (path[i] == '*' && path[i + 1] == '*')
            {
                t = i;
                break;
            }
            i++;
        }

        for (int j = 0; j < t; j++)
        {
            if (path[j] == '@')
            {
                coins_collected++;
            }
        }

        cout << coins_collected << endl;
    }

    return 0;
}