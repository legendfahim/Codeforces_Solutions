
// B. Vanya and Books
#include <bits/stdc++.h>
using namespace std;
long long int main()
{
    long long int n;
    cin >> n;
    if (n < 10)
    {
        cout << n;
    }
    else
    {
        long long int arr[13];
        for (long long int i = 1; i < 13; i++)
        {
            arr[i] = 9 * pow(10, i - 1);
        }

        long long int count = 0;
        for (long long int i = 1; i < 13; i++)
        {
            if (n - arr[i] >= 0)
            {
                count += arr[i] * (long long)i;
                n = n - arr[i];
            }
            else
            {
                count += n * (long long)i;
                break;
            }
        }
        cout << count << endl;
    }
}