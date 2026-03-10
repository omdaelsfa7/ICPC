#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int x, y;

    cin >> x >> y;

    double floor1 = floor((double)x / y);
    double ceil1 = ceil((double)x / y);
    double round1 = round((double)x / y);
    cout << "floor " << x << " / " << y << " = " << floor1 << endl;
    cout << "ceil " << x << " / " << y << " = " << ceil1 << endl;
    cout << "round " << x << " / " << y << " = " << round1 << endl;

    return 0;
}