
// A. Word Capitalization
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word, newWord;
    cin >> word;
    newWord += toupper(word[0]);
    for (int i = 1; i < word.length(); i++)
    {
        newWord += word[i];
    }
    cout << newWord << endl;
}