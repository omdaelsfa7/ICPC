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
    for (int i = 0; i < s.size() - 2; i++)
    {
        char c = s[i];
        char nextC = s[i + 1];
        if (isupper(c))
        {
            cout << "YES" << endl;
            return;
        }
        if (isalpha(c) && isdigit(nextC))
        {
            cout << "YES" << endl;
            return;
        }
        if ((int)c > (int)nextC)
        {
            cout << "YES" << endl;
            return;
        }
        if(c > nextC){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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