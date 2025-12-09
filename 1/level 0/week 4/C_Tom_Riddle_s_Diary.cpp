#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr); \
    cin.tie(nullptr);

void sol()
{
    int n = 0;
    cin >> n;
    vector<string> people ;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        people.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = i ; j >= 0 ; j--)
        {
            if (i != j && people[i] == people[j])
            {
                flag = false;
                continue;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
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