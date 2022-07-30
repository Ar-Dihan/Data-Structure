#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, count = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (int j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[j] > arr[k])
                {
                    swap(arr[j], arr[k]);
                }
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (arr[0] == arr[j])
            {
                count++;
            }
        }
        // cout << count << endl;
        cout << n - count << endl;
        count = 0;
    }
    return 0;
}