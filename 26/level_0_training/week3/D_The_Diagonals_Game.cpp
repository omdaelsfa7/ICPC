#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void sol()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            arr[i][j] = x;
        }
    }
    int sump = 0, sums = 0;
    int curr_r = 0, curr_c = 0;
    while (curr_r < n)
    {
        sump += arr[curr_r][curr_c];
        curr_r++;
        curr_c++;
    }
    curr_r = 0;
    curr_c = n - 1;
    while (curr_r < n)
    {
        sums += arr[curr_r][curr_c];
        curr_r++;
        curr_c--;
    }
    cout << sump << " " << sums;
}

int32_t main()
{
    FIO;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}