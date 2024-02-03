// A. Team
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int problem = 0;
    while (n--)
    {
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            int c;
            cin >> c;
            if (c == 1)
            {
                count++;
            }
        }

        if (count >= 2)
        {
            problem++;
        }
    }
    cout << problem << endl;
}