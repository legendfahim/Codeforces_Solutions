#include <bits/stdc++.h>
using namespace std;
int main()
{
    string numbers;
    cin >> numbers;
    bool result = false;
    for (int i = 0; i < numbers.length(); i++)
    {
        int count = 0;
        if (numbers[i] == '0')
        {
            while (numbers[i] == '0' && numbers.length())
            {
                count++;
                i++;
            }
        }
        else
        {
            while (numbers[i] == '1' && numbers.length())
            {
                count++;
                i++;
            }
        }
        if (count >= 7)
        {
            result = true;
        }
        i--;
    }
    if (result)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}