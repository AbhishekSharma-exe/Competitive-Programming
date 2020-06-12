#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 1, total_socks = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
        else
        {
            count = count / 2;
            total_socks = total_socks + count;
            count = 0;
        }
    }
    cout << total_socks;

    return 0;
}