#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void sol()
{
    int x = 0;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cout << x;
        if (i < x - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
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