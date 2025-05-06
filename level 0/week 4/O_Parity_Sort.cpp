#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cin.tie(nullptr);
void sol()
{
    int n;
    cin >> n;
    vector<int> a(n) ,b(n) ;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != b[i] % 2)
        {
            cout << "NO" << endl;
            return;
        }
        else{
            continue;
        }

        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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