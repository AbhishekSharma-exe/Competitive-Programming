#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, g, m;
    cin >> n >> m;
    int result = -1;
    if (m % n == 0)
    {
        result = 0;
        int g = m / n;
        while (g % 2 == 0)
        {
            result++;
            g/=2;
        }
        while (g % 3 == 0)
        {
            result++;
            g/=3;
        }
        if (g!=1)
        {
            result = -1;
        }
    }
    cout << result << endl;
    return 0;
}