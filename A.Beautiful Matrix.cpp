// A.Beautiful Matrix
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[6][6];
    int cal;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {

            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                cal = abs(i - 3) + abs(j - 3);
            }
        }
    }
    cout << cal;
}
