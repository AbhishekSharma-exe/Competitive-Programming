#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    for (int i = 1; i < a.length(); i++)
    {
        if (a[i] >= 97)
        {
            goto end;
        }
    }
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] < 97)
        {
            a[i] += 32;
        }
        else
        {
            a[i] -= 32;
        }
    }
end:
    cout << a;

    return 0;
}