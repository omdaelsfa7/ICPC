#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cin.tie(nullptr);

void sol()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;
    for (int i = 0; i <= n; i++)
    {
        if (n - i <= a && n - i <= b)
        {

            sum += i 
        }
    }
    cout << sum;
    return;
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