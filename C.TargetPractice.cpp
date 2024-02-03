// C. Target Practice
#include <bits/stdc++.h>
using namespace std;
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(nullptr);        \
    cout.tie(nullptr);

int main()
{
    FastIO

        int t;
    cin >> t;
    while (t--)
    {
        int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
        char arr[11][11];
        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'X')
                {

                    if (i == 1 || i == 10 || j == 1 || j == 10)
                    {
                        c1++;
                    }
                    else if (i == 2 || i == 9 || j == 2 || j == 9)
                    {
                        c2++;
                    }
                    else if (i == 3 || i == 8 || j == 3 || j == 8)
                    {
                        c3++;
                    }
                    else if (i == 4 || i == 7 || j == 4 || j == 7)
                    {
                        c4++;
                    }
                    else if (i == 5 || i == 6 || j == 5 || j == 6)
                    {
                        c5++;
                    }
                }
            }
        }
        cout << c1 * 1 + c2 * 2 + c3 * 3 + c4 * 4 + c5 * 5 << endl;
    }
}