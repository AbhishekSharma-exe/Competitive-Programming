#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a = 0, b = 0, temp, k, c, d;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        a = 0, b = 0;
        int flag = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> c >> d;
            if (c >= d && c >= a && d >= b && (c-a >= d-b))
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                temp = j;
                break;
            }
            a = c;
            b = d;
        }
        if (flag == 0)
        {

            for (k = temp + 1; k < n; k++)
            {
                cin >> a >> b;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}