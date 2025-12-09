#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cin.tie(nullptr);

void sol()
{
    int n, moves = 0;
    cin >> n;
    int arr[n];
    int index[n] ;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        cin >> temp;
        arr[i] = temp;
        index[i] = 0;
        if (temp == 1)
        {
            index[i] = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1 ; j < n - 1; j++)
        {
            if (arr[i] == 1){
                if(arr[j] == 1){
                    index[i] ++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if
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