
// B.Vlad and Shapes
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
        int one = 0;
        int pre = 0;
        bool check = false;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {

            for (int i = 0; i < n; i++)
            {
                char c;
                cin >> c;
                if (c == '1')
                {
                    pre++;
                    check == true;
                }
            }
            if (one == 0)
            {
                one = pre;
                pre = 0;
            }
            else
            {
                if (one == pre)
                {
                    flag = true;
                }
            }
        }

        if (flag)
        {
            cout << "SQUARE" << endl;
        }
        else
        {
            cout << "TRIANGLE" << endl;
        }
    }
}