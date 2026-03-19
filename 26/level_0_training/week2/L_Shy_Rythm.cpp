#include <iostream>
using namespace std;
int main()
{
    long long n, a, b, x, y;
    cin >> n >> a >> b;
    long long lx, rx, ly, ry;
    cin >> lx >> rx >> ly >> ry;

    long long l1 = (lx + a - 1) / a;
    long long r1 = (rx / a);

    long long l2 = n - (ry / b);
    long long r2 = n - ((ly + b - 1) / b);

    long long L = max(l1, l2);
    long long R = min(r1, r2);

    if (L > R)
    {
        cout << -1 << endl;
        return 0;
    }

    if (a > b)
    {
        x = R;
    }
    else
    {
        x = L;
    }
    y = n - x;
    cout << a * x + b * y;

    return 0;
}