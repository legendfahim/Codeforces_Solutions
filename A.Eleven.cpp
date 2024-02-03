
// A. Eleven
#include <iostream>
#include <vector>
using namespace std;

long long int main()
{
    long long int n;
    cin >> n;

    vector<bool> arr(n + 1, false);
    arr[0] = true;
    arr[1] = true;

    long long int pre = 1;
    long long int curr = 1;

    while (curr + pre <= n)
    {
        long long int next = pre + curr;
        arr[next] = true;
        pre = curr;
        curr = next;
    }

    for (long long int i = 1; i <= n; i++)
    {
        if (arr[i])
        {
            cout << 'O';
        }
        else
        {
            cout << 'o';
        }
    }

    return 0;
}