#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

double equ(double a1, double b1, double a2, double b2)
{

    return floor(sqrt(((a2 - a1) * (a2 - a1)) + ((b2 - b1) * (b2 - b1))));
}

void sol()
{
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double a, b, c;
    a = equ(x1, y1, x2, y2);
    b = equ(x1, y1, x3, y3);
    c = equ(x3, y3, x2, y2);

    if (a == b && a == c)
    {
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;
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