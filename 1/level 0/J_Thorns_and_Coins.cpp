#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cin.tie(nullptr);

void sol()
{
    int n = 0, coins = 0;
    cin >> n;
    string s;
    vector<char> v(n);
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        v[i] = s[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == '@')
        {
            coins++;
        }
        else if (v[i] == '.')
        {
            continue;
        }
        else if (v[i] == '*' && i + 1 < n && v[i + 1] == '*')
        {
            break;
        }
    }
    v.clear();
    cout << coins << "\n";
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