// A. Do Not Be Distracted!
#include <bits/stdc++.h>
using namespace std;
long long int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int c;
        cin >> c;

        long long int arr[256] = {0};
        bool result = true;
        char pre;

        for (long long int i = 0; i < c; i++)
        {
            char n;
            cin >> n;
            if (arr[(long long int)n] == 0)
            {
                arr[(long long int)n]++;
            }
            else if (arr[(long long int)n] == 1)
            {
                if (n != pre)
                {
                    result = false;
                }
            }
            pre = n;
        }

        if (result)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}