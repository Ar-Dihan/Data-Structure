#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3], count = 0;
    for (int i = 0; i <= 2; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < 3; j++)
            if (a[i] != a[j])
            {
                count++;
            }
    }
    if (count == 0)
    {
        count++;
    }
    cout << count << endl;

    return 0;
}