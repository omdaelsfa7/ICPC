#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void sol()
{
    int x, y, result;

    cin >> x >> y;

    result = abs(x - y);

    if (x == result)
    {
        cout << "YES";
    }
    else if (y == result)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
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