#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cin.tie(nullptr);

void sol()
{
    int n = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = accumulate(a.begin(), a.end(), 0);
    if (sum == n && n > 2)
    {
        cout << n - 4 << endl; //
        return;
    }
    if (n > 2)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == -1 && a[i + 1] == -1)
            {
                a[i] = 1;
                a[i + 1] = 1;
                break;
            }
        }
    }
    sum = accumulate(a.begin(), a.end(), 0);
    if (n == 2)
    {
        if (a[0] == -1 && a[1] == -1)
        {
            sum = 2;
        }
        else if (a[0] == 1 && a[1] == 1)
        {
            sum = -2;
        }
        else
        {
            sum = 0;
        }
    }
    cout << sum << endl;
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