
// A. Way Too Long Words
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string word;
        cin >> word;
        int tl = word.length();

        if (tl > 10)
        {
            // char first = word[0];
            // char last = word[tl-1];
            cout << word[0] << tl - 2 << word[tl - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }
}