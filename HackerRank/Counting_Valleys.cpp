#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int count = 0, valley = 0;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'U')
        {
            count++;
            if (count == 0)
            {
                valley++;
            }
        }
        else
        {
            count--;
        }
    }
    cout << valley;
    return 0;
}