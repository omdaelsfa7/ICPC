#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void sol()
{
    int id;
    cin >> id;

    int rev_id = 0;
    int id_copy = id, sum = 0;

    while (id_copy > 0)
    {
        rev_id = rev_id * 10 + (id_copy % 10);
        sum += (id_copy % 10);
        id_copy /= 10;
    }
    if (id == rev_id)
    {
        if (id % sum == 0)
        {
            cout << "Best mentor.";
            return;
        }
        cout << "He's good.";
        return;
    }
    if (id % sum == 0)
    {
        cout << "He's good.";
        return;
    }
    cout << "He'll be fired.";
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