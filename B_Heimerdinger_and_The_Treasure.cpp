#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void sol()
{
    int n, m;
    cin >> n >> m;
    char map[n][m];

    int s_row;
    int s_column;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char curr;
            cin >> curr;
            map[i][j] = curr;
            if (curr == 'S')
            {
                s_row = i;
                s_column = j;
            }
        }
    }

    while (true)
    {
        for (int i = s_row - 1; i < 2; i++)
        {
            for (int j = s_column - 1; j < 2; j++)
            {
                if (map[s_row + i][s_column + j] == '*')
                {
                    cout << s_row + i << " " << s_column + j << endl;
                    s_row += i;
                    s_column += j;
                    map[s_row][s_column] = '.';
                }
            }
        }
    }
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