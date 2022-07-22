#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N, totalCandi = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        totalCandi += i;
    }
    cout << totalCandi;
    return 0;
}