#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char a[101];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a;
        for (int j = 0; a[j] != '\0'; j++)
        {
            if (j % 2 == 0 && j != 0)
            {
                continue;
            }
            else
            {
                cout << a[j];
            }
        }
        cout<<endl;
    }

    return 0;
}