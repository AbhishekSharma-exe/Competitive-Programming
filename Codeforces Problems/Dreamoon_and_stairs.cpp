#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, z;
    cin >> n >> m;
    z = n / 2;
    if (n < m)
    {
        cout << "-1";
    }
    else
    {
        for (int i = z; i <= n; i++)
        {
            if (i % m == 0)
            {
                if (i * 2 >= n)
                {
                    cout << i;
                    break;
                }
            }
        }
    }
    return 0;
}