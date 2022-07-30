#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, q;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> q;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int qrr[2];
        for (int k = 0; k < q; k++)
        {
            for (int l = 0; l < 2; l++)
            {
                cin >> qrr[l];
            }
            for (int l = qrr[0] - 1; l < qrr[1] - 1; l++)
            {
                for (int m = 0; m < qrr[1] + 1; m++)
                {
                    for (int i = m + 1; i < m; i++)
                    {
                        swap(qrr[m], qrr[i]);
                    }
                }
                cout << qrr[0] << endl;
            }
        }
    }
    return 0;
}