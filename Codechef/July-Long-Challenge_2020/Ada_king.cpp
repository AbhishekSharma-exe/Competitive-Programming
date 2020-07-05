#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, k;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> k;
        for (int x = 1; x <= 8; x++)
        {
            for (int y = 1; y <= 8; y++)
            {
                if (x == 1 && y == 1)
                {
                    cout << "O";
                    k--;
                    continue;
                }
                if (k > 0)
                {
                    cout << ".";
                    k--;
                    continue;
                }
                if (k == 0)
                {
                    cout << "X";
                    continue;
                }
            }
            cout << endl;
        }
    }

    return 0;
}