#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cin.tie(nullptr);

void sol()
{
    int n, x , distress = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        char s;
        int a;
        cin >> s >> a;

        if (s == '-')
        {
            if(x < a){
                distress ++;
            }
            else
            {
                x -= a;
            }
        }
        else
        {
            x += a;
        }
    }
    cout<< x <<"  " << distress << endl;

    return;


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