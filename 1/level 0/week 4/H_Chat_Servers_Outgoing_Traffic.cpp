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
    int users = 0;
    int count = 0;
    while (getline(cin ,s ))
    {
        if (s[0] == '+' )
        {
            users++;
        }
        else if(s[0] == '-'){
            users--;
        }
        else
        {
            int index = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == ':')
                {
                    index = i;
                    break;
                }
            }
            count += (s.substr(index + 1, s.size()).size()) * users;
        }
    }
    cout << count << endl;
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