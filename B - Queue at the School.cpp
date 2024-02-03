// B - Queue at the School
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    char arr[n];
    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (t--)
    {

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == 'B' && arr[i + 1] == 'G')
            {
                swap(arr[i], arr[i + 1]);
                i++;
            }
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << arr[j];
    }
}