
// A.Moving Chips
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int start, end;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                start = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 1)
            {
                end = i;
                break;
            }
        }
        int count = 0;
        for (int i = start; i < end; i++)
        {
            if (arr[i] == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}