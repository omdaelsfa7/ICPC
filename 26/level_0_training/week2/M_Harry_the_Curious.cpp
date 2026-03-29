#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}
void sol()
{
    int l, r, n;
    cin >> l >> r >> n;
    bool found = false;
    for (int i = l; i <= r; i++)
    {
        if (isPrime(i) == true && n % i == 0)
        {
            found = true;
            cout << i << " ";
        }
    }
    if (found == false)
    {
        cout << -1;
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