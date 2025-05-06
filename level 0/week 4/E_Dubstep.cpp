#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cin.tie(nullptr);

void sol()
{
    string s;
    cin >> s;
    while ((s.find("WUB") >= 0))
    {
        int pos = s.find("WUB");
        s.replace(pos, 3, " ");
    }
    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            if (s[i + 1] == ' ')
            {
                s.erase(i, 1);
                i--;
            }
        }
    }
    if (s[0] == ' ')
    {
        s.erase(0, 1);
    }
    if (s[s.size() - 1] == ' ')
    {
        s.erase(s.size() - 1, 1);
    }
    cout << s << endl;
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