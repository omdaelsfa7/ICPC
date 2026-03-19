#include <iostream>
#include <cmath>
using namespace std;

int fib(int x)
{
    if (x == 0)
    {
        return 0;
    }
    if (x == 1)
    {
        return 1;
    }
    return (fib(x - 2) + fib(x - 1));
}

int main()
{
    int t;
    cin >> t;
    long long fibs[50];
    fibs[0] = 1;
    fibs[1] = 1;

    int sz = 2;
    while (true)
    {
        fibs[sz] = fibs[sz - 1] + fibs[sz - 2];
        if (fibs[sz] > 1e9)
            break;
        sz++;
    }
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < sz; i++)
        {
            for (int j = 0; j < sz; j++)
            {
                for (int k = 0; k < sz; k++)
                {
                    if (fibs[i] + fibs[j] + fibs[k] == n)
                    {
                        cout << "YES\n";
                        goto done;
                    }
                }
            }
        }
        cout << "NO\n";
    done:;
    }
    return 0;
}