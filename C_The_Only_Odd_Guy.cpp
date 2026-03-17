#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void sol()
{
    int n, x;
    int ans = 0;
    cin >> n;
    while (n--)
    {
        cin >> x;
        ans ^= x;
    }
    cout << ans << endl;
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