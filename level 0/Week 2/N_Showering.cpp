#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cin.tie(nullptr);

void sol()
{
    int n, s, m; // n tasks in day , s min of shower , m minutes in a day ;
    cin >> n >> s >> m;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    if(arr[0][0] >= s ){
        cout << "YES" << endl;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i+1][0] - arr[i][1] >= s)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if( (m - arr[n-1][1]) >= s){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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