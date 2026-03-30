#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void sol()
{
    int x, y, counter = 0;
    cin >> x >> y;

    cout << (y * (x * (x - 1) / 2)) + (x * (y * (y - 1) / 2));
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