#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, q;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << endl;
        cin >> n >> q;
        int array[n];
        int pre_array[n];
        for (int j = 0; j < n; j++)
        {
            cin >> array[j];
        }
        while (q--)
        {
            int task;
            cin >> task;

            if (task == 1)
            {
                int i;
                cin >> i;
                cout << array[i] << endl;
                array[i] = 0;
            }
            else if (task == 2)
            {
                int i, v;
                cin >> i >> v;
                array[i] = array[i] + v;
            }
            else
            {
                int i, j;
                pre_array[0] = array[0];
                for (int k = 1; k < n; k++)
                {
                    pre_array[k] = pre_array[k - 1] + array[k];
                }
                cin >> i >> j;
                if (i == 0)
                {
                    cout << pre_array[j] << endl;
                }
                else
                {
                    cout << pre_array[j] - pre_array[i - 1];
                }
            }
        }
    }
    return 0;
}