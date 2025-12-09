#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cin.tie(nullptr);

void sol()
{
    int n, count = 0;
    cin >> n;
    int arr[n];
    int newarr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        newarr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {

                counter++;
            }
        }
        if (counter == 0)
        {
            newarr[count] = arr[i];
            count++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << newarr[i] << " ";
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