#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void sol()
{
    int l, r;
    cin >> l >> r;

    int count = 0;

    count = (r * (r + 1) / 2) - (l * (l - 1) / 2);
    cout << count << endl;
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