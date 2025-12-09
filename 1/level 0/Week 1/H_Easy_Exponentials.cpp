#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr); \
    cin.tie(nullptr);

void sol()
{
    int a , b  , c = 1 ;
    cin >> a >> b;
    for(int i = 0 ; i < b ; i++){
        c = a * c;
    }
    cout << c << "\n";
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