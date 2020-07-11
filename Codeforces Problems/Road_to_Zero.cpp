#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int t, x, y, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> a >> b;
        if (b >= 2 * a)
        {
            cout << a * (x + y) << endl;
        }
        else
        {
            if (x < y)
            {
                cout << (x * b) + (a * (y - x)) << endl;
            }
            else
            {
                cout << (y * b) + (a * (x - y)) << endl;
            }
        }
    }

    return 0;
}