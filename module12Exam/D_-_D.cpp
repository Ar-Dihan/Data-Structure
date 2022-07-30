// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // int t, n, count = 0;
//     // cin >> t;
//     // for (int k = 0; k < t; k++)
//     // {
//     //     cin >> n;
//     //     int arr[n];
//     //     int visited[n];
//     //     for (int i = 0; i < n; i++)
//     //     {
//     //         cin >> arr[i];
//     //     }
//     //     for (int i = 0; i < n; i++)
//     //     {
//     //         if (visited[i] != 1)
//     //         {
//     //             int count = 1;
//     //             for (int j = 0; j < n; j++)
//     //             {
//     //                 if (arr[i] == arr[j])
//     //                 {
//     //                     count++;
//     //                     visited[j] = 1;
//     //                 }
//     //             }
//     //             cout << arr[i] << " occurs at " << count << " times " << endl;
//     //         }
//     //     }
//     // }

//     // int arr[] = {10, 30, 10, 20, 10, 20, 30, 10};
//     // int n = sizeof(arr) / sizeof(arr[0]);

//     int t, n, arr[n];
//     ;
//     cin >> t;
//     for (int k = 0; k < t; k++)
//     {
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//     }

//     int visited[n];

//     for (int i = 0; i < n; i++)
//     {

//         if (visited[i] != 1)
//         {
//             int count = 1;
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     count++;
//                     visited[j] = 1;
//                 }
//             }

//             cout << arr[i] << " occurs at " << count << " times " << endl;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, count = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        int A[N];
        for (int j = 0; j < N; j++)
        {
            cin >> A[j];
        }

        // int counter[N], flag = 0;
        // for (int i = 0; i < N; i++)
        // {
        //     count = 1;
        //     for (int j = i + 1; j < N; j++)
        //     {
        //         if (A[i] == A[j])
        //         {
        //             count++;
        //             counter[j] = flag;
        //         }
        //     }
        //     if (counter[i] != flag)
        //     {
        //         counter[i] = count;
        //     }
        // }
        // for (int i = 0; i < N; i++)
        // {
        //     if (counter[i] != flag)
        //     {
        //         cout << A[i] << " " << counter[i] << endl;
        //     }
        // }
        // sorted
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = 0; j < N - 1; j++)
            {
                if (A[j] > A[j + 1])
                {
                    swap(A[j], A[j + 1]);
                }
            }
        }

        for (int j = 0; j < N - 1; j++)
        {
            if (A[j] != A[j + 1])
            {
                count++;
            }
        }
        // cout << count << endl;

        for (int j = 0; j < N; j++)
        {
            cout << A[j] << " ";
        }
        cout << endl;
    }
    return 0;
}