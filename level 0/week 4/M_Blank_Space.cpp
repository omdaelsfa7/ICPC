#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cin.tie(nullptr);

void sol()
{
    int n = 0, max = 0;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);

    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 0)
        {
            int counter = 1;
            for (int j = i + 1; j < a.size(); j++)
            {
                if (a[j] == 0)
                {
                    counter++;
                }
                else
                {
                    break;
                }
            }

            if (counter > max)
            {
                max = counter;
            }
        }
    }
    cout << max << endl;
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