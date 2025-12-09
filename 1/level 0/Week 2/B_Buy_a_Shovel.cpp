#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cin.tie(nullptr);

void sol()
{
    int iprice, burle, shovels = 1;
    cin >> iprice >> burle;
    int price = iprice;
    while ((price % 10 != 0) && ((price-burle) % 10 != 0))
    {
        // cout << condtion << endl;
        price += iprice;
        shovels++;
    }
    cout << shovels << endl;
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