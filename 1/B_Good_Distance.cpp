#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr); \
    cin.tie(nullptr);

void sol()
{
    int n , d;
    cin >> n >> d ;
    int arr[n][d];
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < d ; j++){
            cin >> arr[i][j];
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