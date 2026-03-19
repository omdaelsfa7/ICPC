#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void sol()
{
    int dresses, parties, fact = 1;
    cin >> dresses >> parties;
    if (parties == 0 || dresses == 0)
    {
        cout << 1;
        return;
    }
    while (parties--)
    {
        fact *= dresses;
        dresses--;
    }

    cout << fact;
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