// A - Hit the Lottery
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {

        // for 100
        if (n >= 100)
        {
            n -= 100;
            count++;
        }
        // for 20

        else if (n >= 20)
        {
            n -= 20;
            count++;
        }
        // for 10

        else if (n >= 10)
        {
            n -= 10;
            count++;
        }
        // for 5

        else if (n >= 5)
        {
            n -= 5;
            count++;
        }
        // for 1

        else if (n >= 1)
        {
            n -= 1;
            count++;
        }
    }
    cout << count << endl;
}