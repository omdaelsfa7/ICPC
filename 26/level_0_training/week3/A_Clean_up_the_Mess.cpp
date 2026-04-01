#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void sol()
{
    int n;
    cin >> n;

    int cnt[26] = {0};
    char c;

    for (int i = 0; i < n; i++)
    {
        cin >> c;
        cnt[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (cnt[i]--)
            cout << char('a' + i);
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