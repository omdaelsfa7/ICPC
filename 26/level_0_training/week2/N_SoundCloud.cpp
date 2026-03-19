#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void sol()
{
    int x;
    cin >> x;
    string s;
    cin >> s;

    int curr = 1, last = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '*')
        {
            last = curr;
            curr++;
        }
        else if (s[i] == '>')
        {
            last = curr + 1;
            curr = last + 1;
        }
        else
        {
            curr--;
            last = curr;
            curr++;
        }
        curr = ((curr - 1) % 20) + 1;
        last = ((last - 1) % 20) + 1;
    }
    cout << last;
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