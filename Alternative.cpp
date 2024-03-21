
// Alternative
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
        vector<int> arr(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int max_beauty = 0;
        for (int i = 1; i < n; ++i)
        {
            max_beauty += arr[i] - arr[i - 1];
        }

        cout << max_beauty << endl;
    }

    return 0;
}