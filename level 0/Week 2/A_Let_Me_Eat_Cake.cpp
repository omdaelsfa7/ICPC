#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cin.tie(nullptr);

void sol()
{
    int a, b, eaten = 0, slices = 0;
    cin >> a >> b;

    bool flag = true;
    while (flag)
    {
        if (a == b)
        {
            cout << slices << endl;
            break;
        }
        else if (a > b)
        {
            eaten = (a + 1) / 2;
            a -= eaten;
            slices += eaten;
        }
        else
        {
            eaten = (b + 1) / 2;
            b -= eaten;
            slices += eaten;
        }
    }
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