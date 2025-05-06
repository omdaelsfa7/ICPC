#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr); \
    cin.tie(nullptr);

void sol()
{
    string s;
    cin >> s;
    vector<char> v;
    int U = 0, L = 0;
    for (char c : s)
    {
        if (isupper(c))
            U++;
        else
            L++;
    }
    if(U > L){
        for (char c : s)
        {
            cout << char(toupper(c));
        }
    }
    else
    {
        for (char c : s)
        {
            cout << char(tolower(c));
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