#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void sol()
{
    int a, b;
    cin >> a >> b;

    int res = a + b;

    if ((res / 2) % 2 == 0)
    {
        cout << "Beevo";
    }
    else
    {
        cout << "Oveeb";
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