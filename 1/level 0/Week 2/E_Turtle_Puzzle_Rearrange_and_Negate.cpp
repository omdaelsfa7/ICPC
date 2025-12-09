#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cin.tie(nullptr);

void sol()
{
    int n, sum = 0;
    cin >> n;
    int arr[n];
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            arr1[i] = arr[i] * (-1);
            arr[i] = 0;
        }
        else
        {
            arr1[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] + arr1[i];
    }
    cout << sum << endl;

    return;
}

int32_t main()
{
    FIO;
    int t = 1;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}