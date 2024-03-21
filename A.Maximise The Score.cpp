
// A.Maximise The Score
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
        vector<int> arr(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        long long int score = 0;

        for (int j = 0; j < (2 * n); j += 2)
        {
            score += arr[j];
        }
        cout << score << endl;
    }
    return 0;
}