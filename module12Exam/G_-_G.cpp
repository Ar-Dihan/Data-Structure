#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    cin >> input;
    if ((input / 100) == input % 10)
    {
        cout << "Yes";
    }
    else
        cout << "No";
    return 0;
}