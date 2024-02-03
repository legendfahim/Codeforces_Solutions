// A. Next Round
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    k = arr[k - 1];

    int count = 0;
    for (int num : arr)
    {
        if (num == 0)
        {
            continue;
        }

        if (num >= k)
        {
            count++;
        }
    }
    cout << count;
}
