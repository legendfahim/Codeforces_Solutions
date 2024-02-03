// A - Arrival of the General
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    int maxI = 0, minI = 0, ma = -1, mi = 200;
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
        if (arr[j] > ma)
        {
            ma = arr[j];
            maxI = j;
        }
        if (arr[j] <= mi)
        {
            mi = arr[j];
            minI = j;
        }
    }
    if (maxI > minI)
    {
        minI++;
    }
    cout << maxI + (n - 1) - minI;
}
