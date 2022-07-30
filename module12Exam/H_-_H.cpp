#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a, b;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            a = i;
            break;
        }
    }

    for (int i = s.length() - 1; i >= 0; i--)
    {

        if (s[i] == 'Z')
        {
            b = i;
            break;
        }
    }
    cout << b - (a - 1);
    return 0;
}
